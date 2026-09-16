#include <iostream>
#include <csignal>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include <open62541/plugin/log_stdout.h>

extern "C" {
    #include "gds_nodeset.h"
}

static volatile UA_Boolean running = true;
static void stopHandler(int sig) {
    (void)sig;
    std::cout << "\n[GDS SERVER] Ending server...\n";
    running = false;
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

    std::cout << "Server listening at opc.tcp://localhost:4840 (Press Ctrl+C to stop)...\n";
    retval = UA_Server_run(server, &running);

    UA_Server_delete(server);
    return (retval == UA_STATUSCODE_GOOD) ? 0 : 1;
}