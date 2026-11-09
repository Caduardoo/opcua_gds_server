#include <iostream>
#include <csignal>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include <open62541/plugin/log_stdout.h>
#include <vector>
#include <string>

extern "C" {
    #include "gds_nodeset.h"
}

static volatile UA_Boolean running = true;
static void stopHandler(int sig) {
    (void)sig;
    std::cout << "\n[GDS SERVER] Ending server...\n";
    running = false;
}

struct RegisteredApp {
    UA_UInt32 recordId;
    std::string endpointUrl;
    std::string capability;
};

static std::vector<RegisteredApp> g_registeredApps;
static UA_UInt32 g_nextRecordId = 1;

static UA_StatusCode
registerApplicationCallback(UA_Server *server,
                            const UA_NodeId *sessionId, void *sessionContext,
                            const UA_NodeId *methodId, void *methodContext,
                            const UA_NodeId *objectId, void *objectContext,
                            size_t inputSize, const UA_Variant *input,
                            size_t outputSize, UA_Variant *output) {
    if (inputSize <2 ||
        !UA_Variant_hasScalarType(&input[0], &UA_TYPES[UA_TYPES_STRING]) ||
        !UA_Variant_hasScalarType(&input[1], &UA_TYPES[UA_TYPES_STRING])) {
        return UA_STATUSCODE_BADINVALIDARGUMENT;
    }

    UA_String *endpointStr = (UA_String*)input[0].data;
    UA_String *capStr      = (UA_String*)input[1].data;

    std::string ep((char*)endpointStr->data, endpointStr->length);
    std::string cap((char*)capStr->data, capStr->length);

    UA_UInt32 assignedId = g_nextRecordId++;
    g_registeredApps.push_back({assignedId, ep, cap});

    std::cout << "[GDS] Application Registry successful! ID=" << assignedId
              << " | Endpoint=" << ep << " | Capability=" << cap << "\n";

    UA_NodeId appId = UA_NODEID_NUMERIC(2, assignedId);
    UA_Variant_setScalarCopy(&output[0], &appId, &UA_TYPES[UA_TYPES_NODEID]);

    return UA_STATUSCODE_GOOD;
}

static UA_StatusCode
queryServersCallback(UA_Server *server,
                     const UA_NodeId *sessionId, void *sessionContext,
                     const UA_NodeId *methodId, void *methodContext,
                     const UA_NodeId *objectId, void *objectContext,
                     size_t inputSize, const UA_Variant *input,
                     size_t outputSize, UA_Variant *output) {
    std::cout << "[GDS] QueryServers() invoked by client. Returning "
              << g_registeredApps.size() << " active endpoint(s).\n";

    // Output 0: LastCounterResetTime (UtcTime)
    UA_DateTime now = UA_DateTime_now();
    UA_Variant_setScalarCopy(&output[0], &now, &UA_TYPES[UA_TYPES_DATETIME]);

    // Output 1: ServerOnNetwork[] (Valid Endpoints)
    size_t count = g_registeredApps.size();
    if (count == 0) {
        UA_Variant_setArray(&output[1], nullptr, 0, &UA_TYPES[UA_TYPES_SERVERONNETWORK]);
        return UA_STATUSCODE_GOOD;
    }

    UA_ServerOnNetwork *servers = (UA_ServerOnNetwork*)
        UA_Array_new(count, &UA_TYPES[UA_TYPES_SERVERONNETWORK]);

    for (size_t i = 0; i < count; ++i) {
        servers[i].recordId = g_registeredApps[i].recordId;
        servers[i].serverName = UA_STRING_ALLOC("O-PAS_Node_B");
        servers[i].discoveryUrl = UA_STRING_ALLOC(g_registeredApps[i].endpointUrl.c_str());
        servers[i].serverCapabilitiesSize = 1;
        servers[i].serverCapabilities = (UA_String*)UA_Array_new(1, &UA_TYPES[UA_TYPES_STRING]);
        servers[i].serverCapabilities[0] = UA_STRING_ALLOC(g_registeredApps[i].capability.c_str());
    }

    UA_Variant_setArray(&output[1], servers, count, &UA_TYPES[UA_TYPES_SERVERONNETWORK]);
    return UA_STATUSCODE_GOOD;
}

static void validateNode(UA_Server *server, UA_NodeId nodeId, const char *nome) {
    UA_QualifiedName browseName;
    UA_StatusCode res = UA_Server_readBrowseName(server, nodeId, &browseName);

    if (res == UA_STATUSCODE_GOOD) {
        std::cout << "[GDS VALIDATION] SUCESS: Node '" << nome << "' present. "
                  << "BrowseName: " << browseName.namespaceIndex << ":";
        std::cout.write((char*)browseName.name.data, browseName.name.length);
        std::cout << "\n";
        UA_QualifiedName_clear(&browseName);
    } else {
        std::cerr << "[GDS VALIDATION] FAILED: Node '" << nome << "' not found! Error: "
                  << UA_StatusCode_name(res) << "\n";
    }
}

int main() {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));

    std::cout << "[GDS SERVER] Injecting GDS information model...\n";

    UA_StatusCode retval = gds_nodeset(server);
    if (retval != UA_STATUSCODE_GOOD) {
        std::cerr << "[GDS SERVER] Failed to load NodeSet: "
                  << UA_StatusCode_name(retval) << "\n";
        UA_Server_delete(server);
        return 1;
    }
    std::cout << "[GDS SERVER] GDS loaded!\n\n";

    size_t gdsNsIdx = 0;
    UA_String gdsUri = UA_STRING_ALLOC("http://opcfoundation.org/UA/GDS/");
    UA_Server_getNamespaceByName(server, gdsUri, &gdsNsIdx);
    UA_String_clear(&gdsUri);

    std::cout << "[GDS SERVER] GDS namespace bound to: " << gdsNsIdx << "\n";
    std::cout << "--- GDS nodes validation ---\n";
    validateNode(server, UA_NODEID_NUMERIC(gdsNsIdx, 1),   "ApplicationRecordDataType (6.5.5)");
    validateNode(server, UA_NODEID_NUMERIC(gdsNsIdx, 13),  "DirectoryType (6.5.3)");
    validateNode(server, UA_NODEID_NUMERIC(gdsNsIdx, 15),  "FindApplications");
    validateNode(server, UA_NODEID_NUMERIC(gdsNsIdx, 18),  "RegisterApplication");
    validateNode(server, UA_NODEID_NUMERIC(gdsNsIdx, 868), "QueryApplications");

    validateNode(server, UA_NODEID_NUMERIC(gdsNsIdx, 141), "Object Directory (Instance)");
    validateNode(server, UA_NODEID_NUMERIC(gdsNsIdx, 143), "FindApplications (Instance)");
    validateNode(server, UA_NODEID_NUMERIC(gdsNsIdx, 146), "RegisterApplication (Instance)");
    validateNode(server, UA_NODEID_NUMERIC(gdsNsIdx, 992), "QueryApplications (Instance)");
    std::cout << "-----------------------------\n\n";

    UA_Server_deleteNode(server, UA_NODEID_NUMERIC(gdsNsIdx, 147), true);

    UA_Argument regArgs[2];
    UA_Argument_init(&regArgs[0]);
    regArgs[0].name = UA_STRING_ALLOC("Endpoint");
    regArgs[0].dataType = UA_TYPES[UA_TYPES_STRING].typeId;
    regArgs[0].valueRank = UA_VALUERANK_SCALAR;

    UA_Argument_init(&regArgs[1]);
    regArgs[1].name = UA_STRING_ALLOC("Capabilities");
    regArgs[1].dataType = UA_TYPES[UA_TYPES_STRING].typeId;
    regArgs[1].valueRank = UA_VALUERANK_SCALAR;

    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT_ALLOC("en-US", "InputArguments");
    attr.dataType = UA_TYPES[UA_TYPES_ARGUMENT].typeId;

    attr.valueRank = UA_VALUERANK_ONE_OR_MORE_DIMENSIONS;

    UA_Variant_setArrayCopy(&attr.value, regArgs, 2, &UA_TYPES[UA_TYPES_ARGUMENT]);

    UA_Server_addVariableNode(server,
                              UA_NODEID_NUMERIC(gdsNsIdx, 147),
                              UA_NODEID_NUMERIC(gdsNsIdx, 146),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASPROPERTY),
                              UA_QUALIFIEDNAME(0, "InputArguments"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_PROPERTYTYPE),
                              attr, nullptr, nullptr);

    UA_VariableAttributes_clear(&attr);
    UA_Argument_clear(&regArgs[0]);
    UA_Argument_clear(&regArgs[1]);

    UA_Server_setMethodNode_callback(server, UA_NODEID_NUMERIC(gdsNsIdx, 146), registerApplicationCallback);
    UA_Server_setMethodNode_callback(server, UA_NODEID_NUMERIC(gdsNsIdx, 151), queryServersCallback);

    std::cout << "Server listening at opc.tcp://localhost:4840 (Press Ctrl+C to stop)...\n";
    retval = UA_Server_run(server, &running);

    UA_Server_delete(server);
    return (retval == UA_STATUSCODE_GOOD) ? 0 : 1;
}
