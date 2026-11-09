#include <iostream>
#include <csignal>
#include <unistd.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include <open62541/client.h>
#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>

static volatile UA_Boolean running = true;
static void stopHandler(int sig) {
    (void)sig;
    running = false;
}

static bool registrarNoGDS(const char *gdsUrl, const char *myEndpoint, const char *capabilities) {
    UA_Client *client = UA_Client_new();
    UA_ClientConfig *cc = UA_Client_getConfig(client);
    UA_ClientConfig_setDefault(cc);
    cc->timeout = 2000;

    std::cout << "[NODE B] Trying to connect to GDS at " << gdsUrl << " ...\n";
    UA_StatusCode status = UA_Client_connect(client, gdsUrl);
    if (status != UA_STATUSCODE_GOOD) {
        std::cerr << "[NODE B - WARN] Connection Refused / Timeout accessing GDS ("
                  << UA_StatusCode_name(status) << ")\n";
        UA_Client_delete(client);
        return false;
    }

    UA_UInt16 gdsNs = 2;
    UA_String gdsUri = UA_STRING_ALLOC("http://opcfoundation.org/UA/GDS/");
    UA_Client_NamespaceGetIndex(client, &gdsUri, &gdsNs);
    UA_String_clear(&gdsUri);

    UA_Variant input[2];
    UA_Variant_init(&input[0]);
    UA_Variant_init(&input[1]);
    UA_String epStr  = UA_STRING_ALLOC(myEndpoint);
    UA_String capStr = UA_STRING_ALLOC(capabilities);
    UA_Variant_setScalar(&input[0], &epStr, &UA_TYPES[UA_TYPES_STRING]);
    UA_Variant_setScalar(&input[1], &capStr, &UA_TYPES[UA_TYPES_STRING]);

    size_t outputSize = 0;
    UA_Variant *output = nullptr;

    status = UA_Client_call(client,
                            UA_NODEID_NUMERIC(gdsNs, 141),
                            UA_NODEID_NUMERIC(gdsNs, 146),
                            2, input, &outputSize, &output);

    UA_String_clear(&epStr);
    UA_String_clear(&capStr);

    if (status == UA_STATUSCODE_GOOD) {
        std::cout << "[NODE B] Registry (OK) by GDS!\n";
        if (output) UA_Array_delete(output, outputSize, &UA_TYPES[UA_TYPES_VARIANT]);
        UA_Client_disconnect(client);
        UA_Client_delete(client);
        return true;
    } else {
        std::cerr << "[NODE B] Failed on RegisterApplication: "
                  << UA_StatusCode_name(status) << "\n";
        UA_Client_disconnect(client);
        UA_Client_delete(client);
        return false;
    }
}

int main() {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    const char *gdsEndpoint = "opc.tcp://localhost:4840";
    const char *myEndpoint  = "opc.tcp://localhost:4841";
    const char *myCap       = "OPAS-DCN";

    int maxRetries = 3;
    bool registered = false;
    for (int attempt = 1; attempt <= maxRetries && running; ++attempt) {
        std::cout << "\n[NODE B] Network login Attempt (" << attempt << "/" << maxRetries << ")...\n";
        if (registrarNoGDS(gdsEndpoint, myEndpoint, myCap)) {
            registered = true;
            break;
        }
        std::cerr << "[NODE B - FALLBACK] GDS Unavailable. Retrying RegisterApplication()...\n";
        sleep(3);
    }

    if (!registered) {
        std::cerr << "[NODE B - WARN] Couldn't register GDS at "
                  << maxRetries << " attempts. Operating on autonomous mode.\n\n";
    }

    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setMinimal(UA_Server_getConfig(server), 4841, nullptr);

    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT_ALLOC("en-US", "SensorData");
    attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Double sensorVal = 42.5;
    UA_Variant_setScalarCopy(&attr.value, &sensorVal, &UA_TYPES[UA_TYPES_DOUBLE]);

    UA_Server_addVariableNode(server,
                              UA_NODEID_NUMERIC(1, 20001),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                              UA_QUALIFIEDNAME_ALLOC(1, "SensorData"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                              attr, nullptr, nullptr);
    UA_VariableAttributes_clear(&attr);

    std::cout << "[NODE B] O-PAS Node B active at: " << myEndpoint << " (SensorData = 42.5)\n";
    UA_StatusCode retval = UA_Server_run(server, &running);

    UA_Server_delete(server);
    return (retval == UA_STATUSCODE_GOOD) ? 0 : 1;
}
