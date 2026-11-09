#include <iostream>
#include <chrono>
#include <string>
#include <csignal>
#include <unistd.h>
#include <open62541/client.h>
#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>

static volatile UA_Boolean running = true;
static void stopHandler(int sig) {
    (void)sig;
    running = false;
}

static bool GDSdiscovery(const char *gdsUrl, std::string &foundendpoint) {
    auto tStart = std::chrono::high_resolution_clock::now();

    UA_Client *gdsClient = UA_Client_new();
    UA_ClientConfig *cc = UA_Client_getConfig(gdsClient);
    UA_ClientConfig_setDefault(cc);
    cc->timeout = 2500;

    std::cout << "[NODE A] Checking GDS at " << gdsUrl << " ...\n";
    UA_StatusCode status = UA_Client_connect(gdsClient, gdsUrl);
    if (status != UA_STATUSCODE_GOOD) {
        std::cerr << "[NODE A - GDS ERROR] Timeout / Host Unreachable: "
                  << UA_StatusCode_name(status) << "\n";
        UA_Client_delete(gdsClient);
        return false;
    }

    UA_UInt16 gdsNs = 2;
    UA_String gdsUri = UA_STRING_ALLOC("http://opcfoundation.org/UA/GDS/");
    UA_Client_NamespaceGetIndex(gdsClient, &gdsUri, &gdsNs);
    UA_String_clear(&gdsUri);

    UA_Variant input[6];
    for (int i = 0; i < 6; ++i) UA_Variant_init(&input[i]);

    UA_UInt32 startId = 0, maxRecords = 0;
    UA_String emptyStr = UA_STRING("");
    UA_Variant_setScalar(&input[0], &startId, &UA_TYPES[UA_TYPES_UINT32]);
    UA_Variant_setScalar(&input[1], &maxRecords, &UA_TYPES[UA_TYPES_UINT32]);
    UA_Variant_setScalar(&input[2], &emptyStr, &UA_TYPES[UA_TYPES_STRING]);
    UA_Variant_setScalar(&input[3], &emptyStr, &UA_TYPES[UA_TYPES_STRING]);
    UA_Variant_setScalar(&input[4], &emptyStr, &UA_TYPES[UA_TYPES_STRING]);
    UA_Variant_setArray(&input[5], nullptr, 0, &UA_TYPES[UA_TYPES_STRING]);

    size_t outputSize = 0;
    UA_Variant *output = nullptr;

    status = UA_Client_call(gdsClient,
                            UA_NODEID_NUMERIC(gdsNs, 141),
                            UA_NODEID_NUMERIC(gdsNs, 151),
                            6, input, &outputSize, &output);

    auto tEnd = std::chrono::high_resolution_clock::now();
    double elapsedMs = std::chrono::duration<double, std::milli>(tEnd - tStart).count();

    bool found = false;
    if (status == UA_STATUSCODE_GOOD && outputSize >= 2) {
        std::cout << "[GDS] Discovery time (GDS): "
                  << elapsedMs << " ms\n";

        UA_ServerOnNetwork *servers = (UA_ServerOnNetwork*)output[1].data;
        size_t count = output[1].arrayLength;
        if (count > 0) {
            foundendpoint.assign((char*)servers[0].discoveryUrl.data,
                                      servers[0].discoveryUrl.length);
            std::cout << "[NODE A] valid endpoint from GDS: " << foundendpoint << "\n";
            found = true;
        } else {
            std::cerr << "[NODE A] No server registered on GDS.\n";
        }
    } else {
        std::cerr << "[NODE A] QueryServers() fail: " << UA_StatusCode_name(status) << "\n";
    }

    if (output) UA_Array_delete(output, outputSize, &UA_TYPES[UA_TYPES_VARIANT]);
    UA_Client_disconnect(gdsClient);
    UA_Client_delete(gdsClient);
    return found;
}

int main() {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    const char *gdsUrl = "opc.tcp://localhost:4840";
    std::string cachedEndpoint = "";

    if (GDSdiscovery(gdsUrl, cachedEndpoint)) {
        std::cout << "[NODE A - CACHE] Endpoint cached at: " << cachedEndpoint << "\n\n";
    } else {
        std::cerr << "[NODE A] Could not discover servers. Ending.\n";
        return 1;
    }

    UA_Client *p2pClient = UA_Client_new();
    UA_ClientConfig_setDefault(UA_Client_getConfig(p2pClient));

    std::cout << "[NODE A] Establishing session" << cachedEndpoint << " ...\n";
    if (UA_Client_connect(p2pClient, cachedEndpoint.c_str()) != UA_STATUSCODE_GOOD) {
        std::cerr << "[NODE A] Failed to connect to O-PAS Node B.\n";
        UA_Client_delete(p2pClient);
        return 1;
    }
    std::cout << "[NODE A] P2P session created! Reading ...(Ctrl+C to end process)...\n";

    while (running) {
        UA_Variant val;
        UA_Variant_init(&val);
        UA_StatusCode st = UA_Client_readValueAttribute(p2pClient, UA_NODEID_NUMERIC(1, 20001), &val);

        if (st == UA_STATUSCODE_GOOD && UA_Variant_hasScalarType(&val, &UA_TYPES[UA_TYPES_DOUBLE])) {
            std::cout << "[P2P READ] SensorData = " << *(UA_Double*)val.data << "\n";
            UA_Variant_clear(&val);
        } else {
            std::cerr << "\n[NODE A - WARN] Keep-Alive Timeout / Connection Broken ("
                      << UA_StatusCode_name(st) << "). OPC UA session finished!\n";
            UA_Client_disconnect(p2pClient);

            std::cout << "[NODE A] Attempting GDS rediscovery (QueryServers)...\n";
            std::string newEndpoint;
            if (GDSdiscovery(gdsUrl, newEndpoint)) {
                cachedEndpoint = newEndpoint;
            } else {
                std::cout << "[NODE A - FALLBACK] GDS unreachable! Using last valid Endpoint from cache: "
                          << cachedEndpoint << "\n";
            }

            std::cout << "[NODE A] Attempting CreateSession() on " << cachedEndpoint << " ...\n";
            if (UA_Client_connect(p2pClient, cachedEndpoint.c_str()) == UA_STATUSCODE_GOOD) {
                std::cout << "[NODE A - SUCCESS] Session Activated! Process restored without GDS.\n\n";
            }
        }
        sleep(2);
    }

    UA_Client_disconnect(p2pClient);
    UA_Client_delete(p2pClient);
    return 0;
}
