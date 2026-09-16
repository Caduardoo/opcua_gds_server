/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "gds_nodeset.h"


/* ApplicationRecordDataType - ns=1;i=1 */

static UA_StatusCode function_gds_nodeset_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ApplicationRecordDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ApplicationRecordDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1LU)
);
}

/* Default JSON - ns=1;i=8001 */

static UA_StatusCode function_gds_nodeset_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 8001LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 8001LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 1LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8001LU)
);
}

/* Default Binary - ns=1;i=134 */

static UA_StatusCode function_gds_nodeset_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 134LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 134LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 1LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 134LU)
);
}

/* Default XML - ns=1;i=127 */

static UA_StatusCode function_gds_nodeset_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 127LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 127LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 1LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 127LU)
);
}

/* Opc.Ua.Gds - ns=1;i=128 */
static const UA_Byte variablenode_ns_1_i_128_variant_DataContents_byteArray[1818] = {60, 120, 115, 58, 115, 99, 104, 101, 109, 97, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 120, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 71, 68, 83, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 13, 10, 32, 32, 116, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 71, 68, 83, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 13, 10, 32, 32, 101, 108, 101, 109, 101, 110, 116, 70, 111, 114, 109, 68, 101, 102, 97, 117, 108, 116, 61, 34, 113, 117, 97, 108, 105, 102, 105, 101, 100, 34, 13, 10, 62, 13, 10, 32, 32, 60, 120, 115, 58, 97, 110, 110, 111, 116, 97, 116, 105, 111, 110, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 97, 112, 112, 105, 110, 102, 111, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 116, 110, 115, 58, 77, 111, 100, 101, 108, 32, 77, 111, 100, 101, 108, 85, 114, 105, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 71, 68, 83, 47, 34, 32, 86, 101, 114, 115, 105, 111, 110, 61, 34, 49, 46, 48, 53, 46, 48, 50, 34, 32, 80, 117, 98, 108, 105, 99, 97, 116, 105, 111, 110, 68, 97, 116, 101, 61, 34, 50, 48, 50, 50, 45, 49, 49, 45, 48, 49, 84, 48, 48, 58, 48, 48, 58, 48, 48, 90, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 97, 112, 112, 105, 110, 102, 111, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 97, 110, 110, 111, 116, 97, 116, 105, 111, 110, 62, 13, 10, 32, 32, 13, 10, 32, 32, 60, 120, 115, 58, 105, 109, 112, 111, 114, 116, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 82, 101, 99, 111, 114, 100, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 73, 100, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 78, 111, 100, 101, 73, 100, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 85, 114, 105, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 78, 97, 109, 101, 115, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 76, 105, 115, 116, 79, 102, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 85, 114, 105, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 105, 115, 99, 111, 118, 101, 114, 121, 85, 114, 108, 115, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 76, 105, 115, 116, 79, 102, 83, 116, 114, 105, 110, 103, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 83, 101, 114, 118, 101, 114, 67, 97, 112, 97, 98, 105, 108, 105, 116, 105, 101, 115, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 76, 105, 115, 116, 79, 102, 83, 116, 114, 105, 110, 103, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 82, 101, 99, 111, 114, 100, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 82, 101, 99, 111, 114, 100, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 82, 101, 99, 111, 114, 100, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 82, 101, 99, 111, 114, 100, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 82, 101, 99, 111, 114, 100, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 82, 101, 99, 111, 114, 100, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 82, 101, 99, 111, 114, 100, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 60, 47, 120, 115, 58, 115, 99, 104, 101, 109, 97, 62};



static UA_StatusCode function_gds_nodeset_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
UA_ByteString *variablenode_ns_1_i_128_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_128_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_128_variant_DataContents);
variablenode_ns_1_i_128_variant_DataContents->length = 1818;
variablenode_ns_1_i_128_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_128_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_128_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua.Gds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 128LU),
UA_NODEID_NUMERIC(ns[0], 92LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Opc.Ua.Gds"),
UA_NODEID_NUMERIC(ns[0], 72LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
variablenode_ns_1_i_128_variant_DataContents->data = NULL;
variablenode_ns_1_i_128_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_128_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 128LU)
);
}

/* Deprecated - ns=1;i=8004 */

static UA_StatusCode function_gds_nodeset_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_1_i_8004_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_8004_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_8004_variant_DataContents);
*variablenode_ns_1_i_8004_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8004_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Deprecated");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8004LU),
UA_NODEID_NUMERIC(ns[1], 128LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deprecated"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_Boolean_delete(variablenode_ns_1_i_8004_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8004LU)
);
}

/* ApplicationRecordDataType - ns=1;i=131 */

static UA_StatusCode function_gds_nodeset_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_131_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_131_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_131_variant_DataContents);
*variablenode_ns_1_i_131_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='ApplicationRecordDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_131_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ApplicationRecordDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 131LU),
UA_NODEID_NUMERIC(ns[1], 128LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ApplicationRecordDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_1_i_131_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 131LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 127LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 131LU)
);
}

/* NamespaceUri - ns=1;i=130 */

static UA_StatusCode function_gds_nodeset_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_130_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_130_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_130_variant_DataContents);
*variablenode_ns_1_i_130_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/GDS/Types.xsd");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_130_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 130LU),
UA_NODEID_NUMERIC(ns[1], 128LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_1_i_130_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 130LU)
);
}

/* Opc.Ua.Gds - ns=1;i=135 */
static const UA_Byte variablenode_ns_1_i_135_variant_DataContents_byteArray[1307] = {60, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 111, 112, 99, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 47, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 120, 115, 105, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 45, 105, 110, 115, 116, 97, 110, 99, 101, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 71, 68, 83, 47, 34, 13, 10, 32, 32, 68, 101, 102, 97, 117, 108, 116, 66, 121, 116, 101, 79, 114, 100, 101, 114, 61, 34, 76, 105, 116, 116, 108, 101, 69, 110, 100, 105, 97, 110, 34, 13, 10, 32, 32, 84, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 71, 68, 83, 47, 34, 13, 10, 62, 13, 10, 32, 32, 60, 111, 112, 99, 58, 73, 109, 112, 111, 114, 116, 32, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 32, 76, 111, 99, 97, 116, 105, 111, 110, 61, 34, 79, 112, 99, 46, 85, 97, 46, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 46, 98, 115, 100, 34, 47, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 82, 101, 99, 111, 114, 100, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 73, 100, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 78, 111, 100, 101, 73, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 85, 114, 105, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 84, 121, 112, 101, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 84, 121, 112, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 78, 111, 79, 102, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 78, 97, 109, 101, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 78, 97, 109, 101, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 76, 111, 99, 97, 108, 105, 122, 101, 100, 84, 101, 120, 116, 34, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 78, 111, 79, 102, 65, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 78, 97, 109, 101, 115, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 80, 114, 111, 100, 117, 99, 116, 85, 114, 105, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 78, 111, 79, 102, 68, 105, 115, 99, 111, 118, 101, 114, 121, 85, 114, 108, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 68, 105, 115, 99, 111, 118, 101, 114, 121, 85, 114, 108, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 34, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 78, 111, 79, 102, 68, 105, 115, 99, 111, 118, 101, 114, 121, 85, 114, 108, 115, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 78, 111, 79, 102, 83, 101, 114, 118, 101, 114, 67, 97, 112, 97, 98, 105, 108, 105, 116, 105, 101, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 83, 101, 114, 118, 101, 114, 67, 97, 112, 97, 98, 105, 108, 105, 116, 105, 101, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 83, 116, 114, 105, 110, 103, 34, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 78, 111, 79, 102, 83, 101, 114, 118, 101, 114, 67, 97, 112, 97, 98, 105, 108, 105, 116, 105, 101, 115, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 60, 47, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 62};



static UA_StatusCode function_gds_nodeset_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
UA_ByteString *variablenode_ns_1_i_135_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_135_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_135_variant_DataContents);
variablenode_ns_1_i_135_variant_DataContents->length = 1307;
variablenode_ns_1_i_135_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_135_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_135_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua.Gds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 135LU),
UA_NODEID_NUMERIC(ns[0], 93LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Opc.Ua.Gds"),
UA_NODEID_NUMERIC(ns[0], 72LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
variablenode_ns_1_i_135_variant_DataContents->data = NULL;
variablenode_ns_1_i_135_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_135_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 135LU)
);
}

/* Deprecated - ns=1;i=8002 */

static UA_StatusCode function_gds_nodeset_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_1_i_8002_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_8002_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_8002_variant_DataContents);
*variablenode_ns_1_i_8002_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8002_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Deprecated");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8002LU),
UA_NODEID_NUMERIC(ns[1], 135LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deprecated"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_Boolean_delete(variablenode_ns_1_i_8002_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8002LU)
);
}

/* ApplicationRecordDataType - ns=1;i=138 */

static UA_StatusCode function_gds_nodeset_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_138_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_138_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_138_variant_DataContents);
*variablenode_ns_1_i_138_variant_DataContents = UA_STRING_ALLOC("ApplicationRecordDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_138_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ApplicationRecordDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 138LU),
UA_NODEID_NUMERIC(ns[1], 135LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ApplicationRecordDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_1_i_138_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 138LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 134LU), false);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 138LU)
);
}

/* NamespaceUri - ns=1;i=137 */

static UA_StatusCode function_gds_nodeset_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_137_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_137_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_137_variant_DataContents);
*variablenode_ns_1_i_137_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/GDS/");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_137_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 137LU),
UA_NODEID_NUMERIC(ns[1], 135LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_1_i_137_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 137LU)
);
}

/* AccessTokenIssuedAuditEventType - ns=1;i=975 */

static UA_StatusCode function_gds_nodeset_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AccessTokenIssuedAuditEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 975LU),
UA_NODEID_NUMERIC(ns[0], 2127LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "AccessTokenIssuedAuditEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 975LU)
);
}

/* AuthorizationServiceType - ns=1;i=966 */

static UA_StatusCode function_gds_nodeset_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AuthorizationServiceType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 966LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "AuthorizationServiceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 966LU)
);
}

/* RequestAccessToken - ns=1;i=969 */

static UA_StatusCode function_gds_nodeset_14_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RequestAccessToken");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 969LU),
UA_NODEID_NUMERIC(ns[1], 966LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "RequestAccessToken"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 969LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_14_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 969LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=971 */

static UA_StatusCode function_gds_nodeset_15_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_971_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_971_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_971_variant_DataContents[0].name = UA_STRING("AccessToken");
variablenode_ns_1_i_971_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_971_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_971_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 971LU),
UA_NODEID_NUMERIC(ns[1], 969LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 971LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_15_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 971LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=970 */

static UA_StatusCode function_gds_nodeset_16_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_970_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_970_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_970_variant_DataContents[0].name = UA_STRING("IdentityToken");
variablenode_ns_1_i_970_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 316LU);
variablenode_ns_1_i_970_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_970_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_970_variant_DataContents[1].name = UA_STRING("ResourceId");
variablenode_ns_1_i_970_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_970_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_970_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 970LU),
UA_NODEID_NUMERIC(ns[1], 969LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 970LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_16_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 970LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ServiceCertificate - ns=1;i=968 */

static UA_StatusCode function_gds_nodeset_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServiceCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 968LU),
UA_NODEID_NUMERIC(ns[1], 966LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ServiceCertificate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 968LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 968LU)
);
}

/* UserTokenPolicies - ns=1;i=967 */

static UA_StatusCode function_gds_nodeset_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 304LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UserTokenPolicies");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 967LU),
UA_NODEID_NUMERIC(ns[1], 966LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "UserTokenPolicies"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 967LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 967LU)
);
}

/* GetServiceDescription - ns=1;i=1004 */

static UA_StatusCode function_gds_nodeset_19_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetServiceDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 1004LU),
UA_NODEID_NUMERIC(ns[1], 966LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetServiceDescription"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1004LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_19_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1004LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=1005 */

static UA_StatusCode function_gds_nodeset_20_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_1005_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_1005_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1005_variant_DataContents[0].name = UA_STRING("ServiceUri");
variablenode_ns_1_i_1005_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_1005_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_1005_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1005_variant_DataContents[1].name = UA_STRING("ServiceCertificate");
variablenode_ns_1_i_1005_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_1005_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_1005_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1005_variant_DataContents[2].name = UA_STRING("UserTokenPolicies");
variablenode_ns_1_i_1005_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 304LU);
variablenode_ns_1_i_1005_variant_DataContents[2].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_1005_variant_DataContents2_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_1005_variant_DataContents2_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_1005_variant_DataContents2_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_1005_variant_DataContents[2].arrayDimensionsSize = 1;
variablenode_ns_1_i_1005_variant_DataContents[2].arrayDimensions = variablenode_ns_1_i_1005_variant_DataContents2_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_1005_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1005LU),
UA_NODEID_NUMERIC(ns[1], 1004LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;



retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1005LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_20_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1005LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ServiceUri - ns=1;i=1003 */

static UA_StatusCode function_gds_nodeset_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServiceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1003LU),
UA_NODEID_NUMERIC(ns[1], 966LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ServiceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1003LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1003LU)
);
}

/* AuthorizationServicesFolderType - ns=1;i=233 */

static UA_StatusCode function_gds_nodeset_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AuthorizationServicesFolderType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 233LU),
UA_NODEID_NUMERIC(ns[0], 61LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "AuthorizationServicesFolderType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 233LU)
);
}

/* AuthorizationServices - ns=1;i=959 */

static UA_StatusCode function_gds_nodeset_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AuthorizationServices");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 959LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "AuthorizationServices"),
UA_NODEID_NUMERIC(ns[1], 233LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 959LU)
);
}

/* <ServiceName> - ns=1;i=234 */

static UA_StatusCode function_gds_nodeset_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ServiceName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 234LU),
UA_NODEID_NUMERIC(ns[1], 233LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "<ServiceName>"),
UA_NODEID_NUMERIC(ns[1], 966LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 234LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 234LU)
);
}

/* GetServiceDescription - ns=1;i=238 */

static UA_StatusCode function_gds_nodeset_25_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetServiceDescription");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 238LU),
UA_NODEID_NUMERIC(ns[1], 234LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetServiceDescription"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 238LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_25_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 238LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=239 */

static UA_StatusCode function_gds_nodeset_26_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_239_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_239_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_239_variant_DataContents[0].name = UA_STRING("ServiceUri");
variablenode_ns_1_i_239_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_239_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_239_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_239_variant_DataContents[1].name = UA_STRING("ServiceCertificate");
variablenode_ns_1_i_239_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_239_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_239_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_239_variant_DataContents[2].name = UA_STRING("UserTokenPolicies");
variablenode_ns_1_i_239_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 304LU);
variablenode_ns_1_i_239_variant_DataContents[2].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_239_variant_DataContents2_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_239_variant_DataContents2_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_239_variant_DataContents2_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_239_variant_DataContents[2].arrayDimensionsSize = 1;
variablenode_ns_1_i_239_variant_DataContents[2].arrayDimensions = variablenode_ns_1_i_239_variant_DataContents2_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_239_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 239LU),
UA_NODEID_NUMERIC(ns[1], 238LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;



retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 239LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_26_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 239LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ServiceCertificate - ns=1;i=236 */

static UA_StatusCode function_gds_nodeset_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServiceCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 236LU),
UA_NODEID_NUMERIC(ns[1], 234LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ServiceCertificate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 236LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 236LU)
);
}

/* ServiceUri - ns=1;i=235 */

static UA_StatusCode function_gds_nodeset_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ServiceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 235LU),
UA_NODEID_NUMERIC(ns[1], 234LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ServiceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 235LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 235LU)
);
}

/* KeyCredentialRevokedAuditEventType - ns=1;i=1075 */

static UA_StatusCode function_gds_nodeset_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "KeyCredentialRevokedAuditEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1075LU),
UA_NODEID_NUMERIC(ns[0], 18011LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "KeyCredentialRevokedAuditEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1075LU)
);
}

/* KeyCredentialDeliveredAuditEventType - ns=1;i=1057 */

static UA_StatusCode function_gds_nodeset_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "KeyCredentialDeliveredAuditEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1057LU),
UA_NODEID_NUMERIC(ns[0], 18011LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "KeyCredentialDeliveredAuditEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1057LU)
);
}

/* KeyCredentialRequestedAuditEventType - ns=1;i=1039 */

static UA_StatusCode function_gds_nodeset_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "KeyCredentialRequestedAuditEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1039LU),
UA_NODEID_NUMERIC(ns[0], 18011LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "KeyCredentialRequestedAuditEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1039LU)
);
}

/* KeyCredentialServiceType - ns=1;i=1020 */

static UA_StatusCode function_gds_nodeset_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "KeyCredentialServiceType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1020LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "KeyCredentialServiceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1020LU)
);
}

/* SecurityPolicyUris - ns=1;i=495 */

static UA_StatusCode function_gds_nodeset_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SecurityPolicyUris");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 495LU),
UA_NODEID_NUMERIC(ns[1], 1020LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SecurityPolicyUris"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 495LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 495LU)
);
}

/* Revoke - ns=1;i=1029 */

static UA_StatusCode function_gds_nodeset_34_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Revoke");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 1029LU),
UA_NODEID_NUMERIC(ns[1], 1020LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Revoke"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1029LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_34_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1029LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=1030 */

static UA_StatusCode function_gds_nodeset_35_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_1030_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_1030_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1030_variant_DataContents[0].name = UA_STRING("CredentialId");
variablenode_ns_1_i_1030_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_1030_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_1030_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1030LU),
UA_NODEID_NUMERIC(ns[1], 1029LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1030LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_35_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1030LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* FinishRequest - ns=1;i=1026 */

static UA_StatusCode function_gds_nodeset_36_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FinishRequest");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 1026LU),
UA_NODEID_NUMERIC(ns[1], 1020LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FinishRequest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1026LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_36_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1026LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=1028 */

static UA_StatusCode function_gds_nodeset_37_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 5;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_1028_variant_DataContents[5];

UA_init(&variablenode_ns_1_i_1028_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1028_variant_DataContents[0].name = UA_STRING("CredentialId");
variablenode_ns_1_i_1028_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_1028_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_1028_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1028_variant_DataContents[1].name = UA_STRING("CredentialSecret");
variablenode_ns_1_i_1028_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_1028_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_1028_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1028_variant_DataContents[2].name = UA_STRING("CertificateThumbprint");
variablenode_ns_1_i_1028_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_1028_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_1028_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1028_variant_DataContents[3].name = UA_STRING("SecurityPolicyUri");
variablenode_ns_1_i_1028_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_1028_variant_DataContents[3].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_1028_variant_DataContents[4], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1028_variant_DataContents[4].name = UA_STRING("GrantedRoles");
variablenode_ns_1_i_1028_variant_DataContents[4].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_1028_variant_DataContents[4].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_1028_variant_DataContents4_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_1028_variant_DataContents4_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_1028_variant_DataContents4_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_1028_variant_DataContents[4].arrayDimensionsSize = 1;
variablenode_ns_1_i_1028_variant_DataContents[4].arrayDimensions = variablenode_ns_1_i_1028_variant_DataContents4_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_1028_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1028LU),
UA_NODEID_NUMERIC(ns[1], 1026LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;





retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1028LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_37_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1028LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=1027 */

static UA_StatusCode function_gds_nodeset_38_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_1027_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_1027_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1027_variant_DataContents[0].name = UA_STRING("RequestId");
variablenode_ns_1_i_1027_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_1027_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_1027_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1027_variant_DataContents[1].name = UA_STRING("CancelRequest");
variablenode_ns_1_i_1027_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_1027_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_1027_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1027LU),
UA_NODEID_NUMERIC(ns[1], 1026LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1027LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_38_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1027LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* StartRequest - ns=1;i=1023 */

static UA_StatusCode function_gds_nodeset_39_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "StartRequest");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 1023LU),
UA_NODEID_NUMERIC(ns[1], 1020LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "StartRequest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1023LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_39_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1023LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=1025 */

static UA_StatusCode function_gds_nodeset_40_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_1025_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_1025_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1025_variant_DataContents[0].name = UA_STRING("RequestId");
variablenode_ns_1_i_1025_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_1025_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_1025_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1025LU),
UA_NODEID_NUMERIC(ns[1], 1023LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1025LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_40_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1025LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=1024 */

static UA_StatusCode function_gds_nodeset_41_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 4;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_1024_variant_DataContents[4];

UA_init(&variablenode_ns_1_i_1024_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1024_variant_DataContents[0].name = UA_STRING("ApplicationUri");
variablenode_ns_1_i_1024_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_1024_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_1024_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1024_variant_DataContents[1].name = UA_STRING("PublicKey");
variablenode_ns_1_i_1024_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_1024_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_1024_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1024_variant_DataContents[2].name = UA_STRING("SecurityPolicyUri");
variablenode_ns_1_i_1024_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_1024_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_1024_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_1024_variant_DataContents[3].name = UA_STRING("RequestedRoles");
variablenode_ns_1_i_1024_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_1024_variant_DataContents[3].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_1024_variant_DataContents3_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_1024_variant_DataContents3_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_1024_variant_DataContents3_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_1024_variant_DataContents[3].arrayDimensionsSize = 1;
variablenode_ns_1_i_1024_variant_DataContents[3].arrayDimensions = variablenode_ns_1_i_1024_variant_DataContents3_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_1024_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1024LU),
UA_NODEID_NUMERIC(ns[1], 1023LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;




retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1024LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_41_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1024LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ProfileUris - ns=1;i=1022 */

static UA_StatusCode function_gds_nodeset_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProfileUris");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1022LU),
UA_NODEID_NUMERIC(ns[1], 1020LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProfileUris"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1022LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1022LU)
);
}

/* ResourceUri - ns=1;i=1021 */

static UA_StatusCode function_gds_nodeset_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ResourceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1021LU),
UA_NODEID_NUMERIC(ns[1], 1020LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ResourceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1021LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1021LU)
);
}

/* KeyCredentialManagementFolderType - ns=1;i=55 */

static UA_StatusCode function_gds_nodeset_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "KeyCredentialManagementFolderType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 55LU),
UA_NODEID_NUMERIC(ns[0], 61LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "KeyCredentialManagementFolderType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 55LU)
);
}

/* <ServiceName> - ns=1;i=61 */

static UA_StatusCode function_gds_nodeset_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ServiceName>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 61LU),
UA_NODEID_NUMERIC(ns[1], 55LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ServiceName>"),
UA_NODEID_NUMERIC(ns[1], 1020LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 61LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 61LU)
);
}

/* ResourceUri - ns=1;i=83 */

static UA_StatusCode function_gds_nodeset_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ResourceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 83LU),
UA_NODEID_NUMERIC(ns[1], 61LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ResourceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 83LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 83LU)
);
}

/* FinishRequest - ns=1;i=196 */

static UA_StatusCode function_gds_nodeset_47_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FinishRequest");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 196LU),
UA_NODEID_NUMERIC(ns[1], 61LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FinishRequest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 196LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_47_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 196LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=203 */

static UA_StatusCode function_gds_nodeset_48_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 5;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_203_variant_DataContents[5];

UA_init(&variablenode_ns_1_i_203_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_203_variant_DataContents[0].name = UA_STRING("CredentialId");
variablenode_ns_1_i_203_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_203_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_203_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_203_variant_DataContents[1].name = UA_STRING("CredentialSecret");
variablenode_ns_1_i_203_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_203_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_203_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_203_variant_DataContents[2].name = UA_STRING("CertificateThumbprint");
variablenode_ns_1_i_203_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_203_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_203_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_203_variant_DataContents[3].name = UA_STRING("SecurityPolicyUri");
variablenode_ns_1_i_203_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_203_variant_DataContents[3].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_203_variant_DataContents[4], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_203_variant_DataContents[4].name = UA_STRING("GrantedRoles");
variablenode_ns_1_i_203_variant_DataContents[4].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_203_variant_DataContents[4].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_203_variant_DataContents4_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_203_variant_DataContents4_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_203_variant_DataContents4_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_203_variant_DataContents[4].arrayDimensionsSize = 1;
variablenode_ns_1_i_203_variant_DataContents[4].arrayDimensions = variablenode_ns_1_i_203_variant_DataContents4_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_203_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 203LU),
UA_NODEID_NUMERIC(ns[1], 196LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;





retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 203LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_48_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 203LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=202 */

static UA_StatusCode function_gds_nodeset_49_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_202_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_202_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_202_variant_DataContents[0].name = UA_STRING("RequestId");
variablenode_ns_1_i_202_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_202_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_202_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_202_variant_DataContents[1].name = UA_STRING("CancelRequest");
variablenode_ns_1_i_202_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_202_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_202_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 202LU),
UA_NODEID_NUMERIC(ns[1], 196LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 202LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_49_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 202LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* StartRequest - ns=1;i=168 */

static UA_StatusCode function_gds_nodeset_50_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "StartRequest");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 168LU),
UA_NODEID_NUMERIC(ns[1], 61LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "StartRequest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 168LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_50_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 168LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=195 */

static UA_StatusCode function_gds_nodeset_51_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_195_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_195_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_195_variant_DataContents[0].name = UA_STRING("RequestId");
variablenode_ns_1_i_195_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_195_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_195_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 195LU),
UA_NODEID_NUMERIC(ns[1], 168LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 195LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_51_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 195LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=171 */

static UA_StatusCode function_gds_nodeset_52_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 4;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_171_variant_DataContents[4];

UA_init(&variablenode_ns_1_i_171_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_171_variant_DataContents[0].name = UA_STRING("ApplicationUri");
variablenode_ns_1_i_171_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_171_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_171_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_171_variant_DataContents[1].name = UA_STRING("PublicKey");
variablenode_ns_1_i_171_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_171_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_171_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_171_variant_DataContents[2].name = UA_STRING("SecurityPolicyUri");
variablenode_ns_1_i_171_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_171_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_171_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_171_variant_DataContents[3].name = UA_STRING("RequestedRoles");
variablenode_ns_1_i_171_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_171_variant_DataContents[3].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_171_variant_DataContents3_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_171_variant_DataContents3_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_171_variant_DataContents3_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_171_variant_DataContents[3].arrayDimensionsSize = 1;
variablenode_ns_1_i_171_variant_DataContents[3].arrayDimensions = variablenode_ns_1_i_171_variant_DataContents3_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_171_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 171LU),
UA_NODEID_NUMERIC(ns[1], 168LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;




retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 171LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_52_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 171LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ProfileUris - ns=1;i=162 */

static UA_StatusCode function_gds_nodeset_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProfileUris");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 162LU),
UA_NODEID_NUMERIC(ns[1], 61LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProfileUris"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 162LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 162LU)
);
}

/* KeyCredentialManagement - ns=1;i=1008 */

static UA_StatusCode function_gds_nodeset_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "KeyCredentialManagement");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 1008LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "KeyCredentialManagement"),
UA_NODEID_NUMERIC(ns[1], 55LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1008LU)
);
}

/* CertificateDeliveredAuditEventType - ns=1;i=109 */

static UA_StatusCode function_gds_nodeset_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateDeliveredAuditEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 109LU),
UA_NODEID_NUMERIC(ns[0], 2127LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "CertificateDeliveredAuditEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 109LU)
);
}

/* CertificateType - ns=1;i=720 */

static UA_StatusCode function_gds_nodeset_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 720LU),
UA_NODEID_NUMERIC(ns[1], 109LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "CertificateType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 720LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 720LU)
);
}

/* CertificateGroup - ns=1;i=719 */

static UA_StatusCode function_gds_nodeset_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateGroup");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 719LU),
UA_NODEID_NUMERIC(ns[1], 109LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "CertificateGroup"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 719LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 719LU)
);
}

/* CertificateRequestedAuditEventType - ns=1;i=91 */

static UA_StatusCode function_gds_nodeset_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateRequestedAuditEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 91LU),
UA_NODEID_NUMERIC(ns[0], 2127LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "CertificateRequestedAuditEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 91LU)
);
}

/* CertificateType - ns=1;i=718 */

static UA_StatusCode function_gds_nodeset_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 718LU),
UA_NODEID_NUMERIC(ns[1], 91LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "CertificateType"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 718LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 718LU)
);
}

/* CertificateGroup - ns=1;i=717 */

static UA_StatusCode function_gds_nodeset_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateGroup");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 717LU),
UA_NODEID_NUMERIC(ns[1], 91LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "CertificateGroup"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 717LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 717LU)
);
}

/* ApplicationRegistrationChangedAuditEventType - ns=1;i=26 */

static UA_StatusCode function_gds_nodeset_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ApplicationRegistrationChangedAuditEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 26LU),
UA_NODEID_NUMERIC(ns[0], 2127LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ApplicationRegistrationChangedAuditEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 26LU)
);
}

/* DirectoryType - ns=1;i=13 */

static UA_StatusCode function_gds_nodeset_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DirectoryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 61LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "DirectoryType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 13LU)
);
}

/* QueryApplications - ns=1;i=868 */

static UA_StatusCode function_gds_nodeset_63_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "QueryApplications");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 868LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "QueryApplications"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 868LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_63_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 868LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=870 */

static UA_StatusCode function_gds_nodeset_64_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_870_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_870_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_870_variant_DataContents[0].name = UA_STRING("LastCounterResetTime");
variablenode_ns_1_i_870_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
variablenode_ns_1_i_870_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_870_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_870_variant_DataContents[1].name = UA_STRING("NextRecordId");
variablenode_ns_1_i_870_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_870_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_870_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_870_variant_DataContents[2].name = UA_STRING("Applications");
variablenode_ns_1_i_870_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 308LU);
variablenode_ns_1_i_870_variant_DataContents[2].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_870_variant_DataContents2_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_870_variant_DataContents2_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_870_variant_DataContents2_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_870_variant_DataContents[2].arrayDimensionsSize = 1;
variablenode_ns_1_i_870_variant_DataContents[2].arrayDimensions = variablenode_ns_1_i_870_variant_DataContents2_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_870_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 870LU),
UA_NODEID_NUMERIC(ns[1], 868LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;



retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 870LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_64_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 870LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=869 */

static UA_StatusCode function_gds_nodeset_65_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 7;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_869_variant_DataContents[7];

UA_init(&variablenode_ns_1_i_869_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_869_variant_DataContents[0].name = UA_STRING("StartingRecordId");
variablenode_ns_1_i_869_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_869_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_869_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_869_variant_DataContents[1].name = UA_STRING("MaxRecordsToReturn");
variablenode_ns_1_i_869_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_869_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_869_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_869_variant_DataContents[2].name = UA_STRING("ApplicationName");
variablenode_ns_1_i_869_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_869_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_869_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_869_variant_DataContents[3].name = UA_STRING("ApplicationUri");
variablenode_ns_1_i_869_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_869_variant_DataContents[3].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_869_variant_DataContents[4], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_869_variant_DataContents[4].name = UA_STRING("ApplicationType");
variablenode_ns_1_i_869_variant_DataContents[4].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_869_variant_DataContents[4].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_869_variant_DataContents[5], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_869_variant_DataContents[5].name = UA_STRING("ProductUri");
variablenode_ns_1_i_869_variant_DataContents[5].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_869_variant_DataContents[5].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_869_variant_DataContents[6], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_869_variant_DataContents[6].name = UA_STRING("Capabilities");
variablenode_ns_1_i_869_variant_DataContents[6].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_869_variant_DataContents[6].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_869_variant_DataContents6_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_869_variant_DataContents6_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_869_variant_DataContents6_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_869_variant_DataContents[6].arrayDimensionsSize = 1;
variablenode_ns_1_i_869_variant_DataContents[6].arrayDimensions = variablenode_ns_1_i_869_variant_DataContents6_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_869_variant_DataContents, (UA_Int32) 7, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 869LU),
UA_NODEID_NUMERIC(ns[1], 868LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;







retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 869LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_65_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 869LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CertificateDirectoryType - ns=1;i=63 */

static UA_StatusCode function_gds_nodeset_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateDirectoryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "CertificateDirectoryType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 63LU)
);
}

/* GetCertificates - ns=1;i=89 */

static UA_StatusCode function_gds_nodeset_67_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetCertificates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 89LU),
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetCertificates"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 89LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_67_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 89LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=90 */

static UA_StatusCode function_gds_nodeset_68_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_90_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_90_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_90_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_90_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_90_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_90_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_90_variant_DataContents[1].name = UA_STRING("CertificateGroupId");
variablenode_ns_1_i_90_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_90_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_90_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 90LU),
UA_NODEID_NUMERIC(ns[1], 89LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 90LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_68_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 90LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=108 */

static UA_StatusCode function_gds_nodeset_69_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_108_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_108_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_108_variant_DataContents[0].name = UA_STRING("CertificateTypeIds");
variablenode_ns_1_i_108_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_108_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_108_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_108_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_108_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_108_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_1_i_108_variant_DataContents[0].arrayDimensions = variablenode_ns_1_i_108_variant_DataContents0_arrayDimensions;

UA_init(&variablenode_ns_1_i_108_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_108_variant_DataContents[1].name = UA_STRING("Certificates");
variablenode_ns_1_i_108_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_108_variant_DataContents[1].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_108_variant_DataContents1_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_108_variant_DataContents1_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_108_variant_DataContents1_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_108_variant_DataContents[1].arrayDimensionsSize = 1;
variablenode_ns_1_i_108_variant_DataContents[1].arrayDimensions = variablenode_ns_1_i_108_variant_DataContents1_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_108_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 108LU),
UA_NODEID_NUMERIC(ns[1], 89LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 108LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_69_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 108LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* FinishRequest - ns=1;i=85 */

static UA_StatusCode function_gds_nodeset_70_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FinishRequest");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 85LU),
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FinishRequest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 85LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_70_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 85LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=87 */

static UA_StatusCode function_gds_nodeset_71_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_87_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_87_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_87_variant_DataContents[0].name = UA_STRING("Certificate");
variablenode_ns_1_i_87_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_87_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_87_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_87_variant_DataContents[1].name = UA_STRING("PrivateKey");
variablenode_ns_1_i_87_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_87_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_87_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_87_variant_DataContents[2].name = UA_STRING("IssuerCertificates");
variablenode_ns_1_i_87_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_87_variant_DataContents[2].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_87_variant_DataContents2_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_87_variant_DataContents2_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_87_variant_DataContents2_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_87_variant_DataContents[2].arrayDimensionsSize = 1;
variablenode_ns_1_i_87_variant_DataContents[2].arrayDimensions = variablenode_ns_1_i_87_variant_DataContents2_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_87_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 87LU),
UA_NODEID_NUMERIC(ns[1], 85LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;



retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 87LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_71_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 87LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=86 */

static UA_StatusCode function_gds_nodeset_72_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_86_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_86_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_86_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_86_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_86_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_86_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_86_variant_DataContents[1].name = UA_STRING("RequestId");
variablenode_ns_1_i_86_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_86_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_86_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 86LU),
UA_NODEID_NUMERIC(ns[1], 85LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 86LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_72_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 86LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* StartSigningRequest - ns=1;i=79 */

static UA_StatusCode function_gds_nodeset_73_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "StartSigningRequest");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 79LU),
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "StartSigningRequest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 79LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_73_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 79LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=81 */

static UA_StatusCode function_gds_nodeset_74_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_81_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_81_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_81_variant_DataContents[0].name = UA_STRING("RequestId");
variablenode_ns_1_i_81_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_81_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_81_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 81LU),
UA_NODEID_NUMERIC(ns[1], 79LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 81LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_74_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 81LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=80 */

static UA_StatusCode function_gds_nodeset_75_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 4;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_80_variant_DataContents[4];

UA_init(&variablenode_ns_1_i_80_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_80_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_80_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_80_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_80_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_80_variant_DataContents[1].name = UA_STRING("CertificateGroupId");
variablenode_ns_1_i_80_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_80_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_80_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_80_variant_DataContents[2].name = UA_STRING("CertificateTypeId");
variablenode_ns_1_i_80_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_80_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_80_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_80_variant_DataContents[3].name = UA_STRING("CertificateRequest");
variablenode_ns_1_i_80_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_80_variant_DataContents[3].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_80_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 80LU),
UA_NODEID_NUMERIC(ns[1], 79LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;




retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 80LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_75_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 80LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* StartNewKeyPairRequest - ns=1;i=76 */

static UA_StatusCode function_gds_nodeset_76_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "StartNewKeyPairRequest");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 76LU),
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "StartNewKeyPairRequest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 76LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_76_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 76LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=78 */

static UA_StatusCode function_gds_nodeset_77_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_78_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_78_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_78_variant_DataContents[0].name = UA_STRING("RequestId");
variablenode_ns_1_i_78_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_78_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_78_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 78LU),
UA_NODEID_NUMERIC(ns[1], 76LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_77_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 78LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=77 */

static UA_StatusCode function_gds_nodeset_78_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 7;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_77_variant_DataContents[7];

UA_init(&variablenode_ns_1_i_77_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_77_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_77_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_77_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_77_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_77_variant_DataContents[1].name = UA_STRING("CertificateGroupId");
variablenode_ns_1_i_77_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_77_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_77_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_77_variant_DataContents[2].name = UA_STRING("CertificateTypeId");
variablenode_ns_1_i_77_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_77_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_77_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_77_variant_DataContents[3].name = UA_STRING("SubjectName");
variablenode_ns_1_i_77_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_77_variant_DataContents[3].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_77_variant_DataContents[4], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_77_variant_DataContents[4].name = UA_STRING("DomainNames");
variablenode_ns_1_i_77_variant_DataContents[4].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_77_variant_DataContents[4].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_77_variant_DataContents4_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_77_variant_DataContents4_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_77_variant_DataContents4_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_77_variant_DataContents[4].arrayDimensionsSize = 1;
variablenode_ns_1_i_77_variant_DataContents[4].arrayDimensions = variablenode_ns_1_i_77_variant_DataContents4_arrayDimensions;

UA_init(&variablenode_ns_1_i_77_variant_DataContents[5], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_77_variant_DataContents[5].name = UA_STRING("PrivateKeyFormat");
variablenode_ns_1_i_77_variant_DataContents[5].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_77_variant_DataContents[5].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_77_variant_DataContents[6], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_77_variant_DataContents[6].name = UA_STRING("PrivateKeyPassword");
variablenode_ns_1_i_77_variant_DataContents[6].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_77_variant_DataContents[6].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_77_variant_DataContents, (UA_Int32) 7, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 77LU),
UA_NODEID_NUMERIC(ns[1], 76LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;







retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 77LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_78_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 77LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CertificateGroups - ns=1;i=511 */

static UA_StatusCode function_gds_nodeset_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateGroups");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 511LU),
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "CertificateGroups"),
UA_NODEID_NUMERIC(ns[0], 13813LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 511LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 511LU)
);
}

/* DefaultApplicationGroup - ns=1;i=512 */

static UA_StatusCode function_gds_nodeset_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultApplicationGroup");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 512LU),
UA_NODEID_NUMERIC(ns[1], 511LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "DefaultApplicationGroup"),
UA_NODEID_NUMERIC(ns[0], 12555LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 512LU), UA_NODEID_NUMERIC(ns[0], 9006LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 13225LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 512LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 512LU)
);
}

/* CertificateTypes - ns=1;i=545 */

static UA_StatusCode function_gds_nodeset_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 545LU),
UA_NODEID_NUMERIC(ns[1], 512LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "CertificateTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 545LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 545LU)
);
}

/* TrustList - ns=1;i=513 */

static UA_StatusCode function_gds_nodeset_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TrustList");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[1], 512LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "TrustList"),
UA_NODEID_NUMERIC(ns[0], 12522LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 513LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 513LU)
);
}

/* RemoveCertificate - ns=1;i=543 */

static UA_StatusCode function_gds_nodeset_83_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 543LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RemoveCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 543LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_83_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 543LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=544 */

static UA_StatusCode function_gds_nodeset_84_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_544_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_544_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_544_variant_DataContents[0].name = UA_STRING("Thumbprint");
variablenode_ns_1_i_544_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_544_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_544_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_544_variant_DataContents[1].name = UA_STRING("IsTrustedCertificate");
variablenode_ns_1_i_544_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_544_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_544_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 544LU),
UA_NODEID_NUMERIC(ns[1], 543LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 544LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_84_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 544LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddCertificate - ns=1;i=541 */

static UA_StatusCode function_gds_nodeset_85_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 541LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AddCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 541LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_85_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 541LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=542 */

static UA_StatusCode function_gds_nodeset_86_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_542_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_542_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_542_variant_DataContents[0].name = UA_STRING("Certificate");
variablenode_ns_1_i_542_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_542_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_542_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_542_variant_DataContents[1].name = UA_STRING("IsTrustedCertificate");
variablenode_ns_1_i_542_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_542_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_542_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 542LU),
UA_NODEID_NUMERIC(ns[1], 541LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 542LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_86_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 542LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CloseAndUpdate - ns=1;i=538 */

static UA_StatusCode function_gds_nodeset_87_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CloseAndUpdate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 538LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CloseAndUpdate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 538LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_87_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 538LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=540 */

static UA_StatusCode function_gds_nodeset_88_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_540_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_540_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_540_variant_DataContents[0].name = UA_STRING("ApplyChangesRequired");
variablenode_ns_1_i_540_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_540_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_540_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 540LU),
UA_NODEID_NUMERIC(ns[1], 538LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 540LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_88_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 540LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=539 */

static UA_StatusCode function_gds_nodeset_89_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_539_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_539_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_539_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_539_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_539_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_539_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 539LU),
UA_NODEID_NUMERIC(ns[1], 538LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 539LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_89_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 539LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OpenWithMasks - ns=1;i=535 */

static UA_StatusCode function_gds_nodeset_90_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "OpenWithMasks");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 535LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "OpenWithMasks"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 535LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_90_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 535LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=537 */

static UA_StatusCode function_gds_nodeset_91_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_537_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_537_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_537_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_537_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_537_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_537_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 537LU),
UA_NODEID_NUMERIC(ns[1], 535LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 537LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_91_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 537LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=536 */

static UA_StatusCode function_gds_nodeset_92_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_536_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_536_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_536_variant_DataContents[0].name = UA_STRING("Masks");
variablenode_ns_1_i_536_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_536_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_536_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 536LU),
UA_NODEID_NUMERIC(ns[1], 535LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 536LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_92_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 536LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* LastUpdateTime - ns=1;i=534 */

static UA_StatusCode function_gds_nodeset_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LastUpdateTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 534LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "LastUpdateTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 534LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 534LU)
);
}

/* SetPosition - ns=1;i=532 */

static UA_StatusCode function_gds_nodeset_94_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetPosition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 532LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 532LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_94_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 532LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=533 */

static UA_StatusCode function_gds_nodeset_95_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_533_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_533_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_533_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_533_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_533_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_533_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_533_variant_DataContents[1].name = UA_STRING("Position");
variablenode_ns_1_i_533_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
variablenode_ns_1_i_533_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_533_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 533LU),
UA_NODEID_NUMERIC(ns[1], 532LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 533LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_95_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 533LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetPosition - ns=1;i=529 */

static UA_StatusCode function_gds_nodeset_96_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetPosition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 529LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "GetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 529LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_96_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 529LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=531 */

static UA_StatusCode function_gds_nodeset_97_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_531_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_531_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_531_variant_DataContents[0].name = UA_STRING("Position");
variablenode_ns_1_i_531_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
variablenode_ns_1_i_531_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_531_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 531LU),
UA_NODEID_NUMERIC(ns[1], 529LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 531LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_97_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 531LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=530 */

static UA_StatusCode function_gds_nodeset_98_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_530_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_530_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_530_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_530_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_530_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_530_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 530LU),
UA_NODEID_NUMERIC(ns[1], 529LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 530LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_98_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 530LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Write - ns=1;i=527 */

static UA_StatusCode function_gds_nodeset_99_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Write");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 527LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Write"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 527LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_99_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 527LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=528 */

static UA_StatusCode function_gds_nodeset_100_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_528_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_528_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_528_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_528_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_528_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_528_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_528_variant_DataContents[1].name = UA_STRING("Data");
variablenode_ns_1_i_528_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_528_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_528_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 528LU),
UA_NODEID_NUMERIC(ns[1], 527LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 528LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_100_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 528LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Read - ns=1;i=524 */

static UA_StatusCode function_gds_nodeset_101_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Read");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 524LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Read"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 524LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_101_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 524LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=526 */

static UA_StatusCode function_gds_nodeset_102_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_526_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_526_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_526_variant_DataContents[0].name = UA_STRING("Data");
variablenode_ns_1_i_526_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_526_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_526_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 526LU),
UA_NODEID_NUMERIC(ns[1], 524LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 526LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_102_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 526LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=525 */

static UA_StatusCode function_gds_nodeset_103_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_525_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_525_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_525_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_525_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_525_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_525_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_525_variant_DataContents[1].name = UA_STRING("Length");
variablenode_ns_1_i_525_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_525_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_525_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 525LU),
UA_NODEID_NUMERIC(ns[1], 524LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 525LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_103_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 525LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Close - ns=1;i=522 */

static UA_StatusCode function_gds_nodeset_104_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Close");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 522LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Close"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 522LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_104_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 522LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=523 */

static UA_StatusCode function_gds_nodeset_105_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_523_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_523_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_523_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_523_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_523_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_523_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 523LU),
UA_NODEID_NUMERIC(ns[1], 522LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 523LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_105_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 523LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Open - ns=1;i=519 */

static UA_StatusCode function_gds_nodeset_106_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Open");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 519LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Open"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 519LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_106_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 519LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=521 */

static UA_StatusCode function_gds_nodeset_107_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_521_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_521_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_521_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_521_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_521_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_521_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 521LU),
UA_NODEID_NUMERIC(ns[1], 519LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 521LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_107_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 521LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=520 */

static UA_StatusCode function_gds_nodeset_108_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_520_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_520_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_520_variant_DataContents[0].name = UA_STRING("Mode");
variablenode_ns_1_i_520_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
variablenode_ns_1_i_520_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_520_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 520LU),
UA_NODEID_NUMERIC(ns[1], 519LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 520LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_108_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 520LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OpenCount - ns=1;i=517 */

static UA_StatusCode function_gds_nodeset_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "OpenCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 517LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OpenCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 517LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 517LU)
);
}

/* UserWritable - ns=1;i=516 */

static UA_StatusCode function_gds_nodeset_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UserWritable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 516LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "UserWritable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 516LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 516LU)
);
}

/* Writable - ns=1;i=515 */

static UA_StatusCode function_gds_nodeset_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Writable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 515LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Writable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 515LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 515LU)
);
}

/* Size - ns=1;i=514 */

static UA_StatusCode function_gds_nodeset_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Size");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 514LU),
UA_NODEID_NUMERIC(ns[1], 513LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Size"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 514LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 514LU)
);
}

/* GetCertificateGroups - ns=1;i=369 */

static UA_StatusCode function_gds_nodeset_113_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetCertificateGroups");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 369LU),
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetCertificateGroups"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 369LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_113_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 369LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=371 */

static UA_StatusCode function_gds_nodeset_114_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_371_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_371_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_371_variant_DataContents[0].name = UA_STRING("CertificateGroupIds");
variablenode_ns_1_i_371_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_371_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_371_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_371_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_371_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_371_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_1_i_371_variant_DataContents[0].arrayDimensions = variablenode_ns_1_i_371_variant_DataContents0_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_371_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 371LU),
UA_NODEID_NUMERIC(ns[1], 369LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 371LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_114_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 371LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=370 */

static UA_StatusCode function_gds_nodeset_115_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_370_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_370_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_370_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_370_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_370_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_370_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 370LU),
UA_NODEID_NUMERIC(ns[1], 369LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 370LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_115_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 370LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetCertificateStatus - ns=1;i=222 */

static UA_StatusCode function_gds_nodeset_116_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetCertificateStatus");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 222LU),
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetCertificateStatus"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 222LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_116_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 222LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=224 */

static UA_StatusCode function_gds_nodeset_117_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_224_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_224_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_224_variant_DataContents[0].name = UA_STRING("UpdateRequired");
variablenode_ns_1_i_224_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_224_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_224_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 224LU),
UA_NODEID_NUMERIC(ns[1], 222LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 224LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_117_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 224LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=223 */

static UA_StatusCode function_gds_nodeset_118_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_223_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_223_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_223_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_223_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_223_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_223_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_223_variant_DataContents[1].name = UA_STRING("CertificateGroupId");
variablenode_ns_1_i_223_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_223_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_223_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_223_variant_DataContents[2].name = UA_STRING("CertificateTypeId");
variablenode_ns_1_i_223_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_223_variant_DataContents[2].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_223_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 223LU),
UA_NODEID_NUMERIC(ns[1], 222LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;



retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 223LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_118_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 223LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetTrustList - ns=1;i=197 */

static UA_StatusCode function_gds_nodeset_119_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetTrustList");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 197LU),
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetTrustList"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 197LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_119_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 197LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=199 */

static UA_StatusCode function_gds_nodeset_120_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_199_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_199_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_199_variant_DataContents[0].name = UA_STRING("TrustListId");
variablenode_ns_1_i_199_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_199_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_199_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 199LU),
UA_NODEID_NUMERIC(ns[1], 197LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 199LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_120_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 199LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=198 */

static UA_StatusCode function_gds_nodeset_121_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_198_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_198_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_198_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_198_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_198_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_198_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_198_variant_DataContents[1].name = UA_STRING("CertificateGroupId");
variablenode_ns_1_i_198_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_198_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_198_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 198LU),
UA_NODEID_NUMERIC(ns[1], 197LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 198LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_121_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 198LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RevokeCertificate - ns=1;i=15003 */

static UA_StatusCode function_gds_nodeset_122_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RevokeCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 15003LU),
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "RevokeCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15003LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_122_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15003LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=15004 */

static UA_StatusCode function_gds_nodeset_123_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_15004_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_15004_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_15004_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_15004_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_15004_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_15004_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_15004_variant_DataContents[1].name = UA_STRING("Certificate");
variablenode_ns_1_i_15004_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_15004_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_15004_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15004LU),
UA_NODEID_NUMERIC(ns[1], 15003LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15004LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_123_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15004LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Directory - ns=1;i=141 */

static UA_StatusCode function_gds_nodeset_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Directory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Directory"),
UA_NODEID_NUMERIC(ns[1], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 141LU)
);
}

/* QueryApplications - ns=1;i=992 */

static UA_StatusCode function_gds_nodeset_125_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "QueryApplications");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 992LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "QueryApplications"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_125_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 992LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=994 */

static UA_StatusCode function_gds_nodeset_126_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_994_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_994_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_994_variant_DataContents[0].name = UA_STRING("LastCounterResetTime");
variablenode_ns_1_i_994_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
variablenode_ns_1_i_994_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_994_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_994_variant_DataContents[1].name = UA_STRING("NextRecordId");
variablenode_ns_1_i_994_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_994_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_994_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_994_variant_DataContents[2].name = UA_STRING("Applications");
variablenode_ns_1_i_994_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 308LU);
variablenode_ns_1_i_994_variant_DataContents[2].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_994_variant_DataContents2_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_994_variant_DataContents2_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_994_variant_DataContents2_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_994_variant_DataContents[2].arrayDimensionsSize = 1;
variablenode_ns_1_i_994_variant_DataContents[2].arrayDimensions = variablenode_ns_1_i_994_variant_DataContents2_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_994_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 994LU),
UA_NODEID_NUMERIC(ns[1], 992LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;



return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_126_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 994LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=993 */

static UA_StatusCode function_gds_nodeset_127_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 7;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_993_variant_DataContents[7];

UA_init(&variablenode_ns_1_i_993_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_993_variant_DataContents[0].name = UA_STRING("StartingRecordId");
variablenode_ns_1_i_993_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_993_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_993_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_993_variant_DataContents[1].name = UA_STRING("MaxRecordsToReturn");
variablenode_ns_1_i_993_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_993_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_993_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_993_variant_DataContents[2].name = UA_STRING("ApplicationName");
variablenode_ns_1_i_993_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_993_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_993_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_993_variant_DataContents[3].name = UA_STRING("ApplicationUri");
variablenode_ns_1_i_993_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_993_variant_DataContents[3].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_993_variant_DataContents[4], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_993_variant_DataContents[4].name = UA_STRING("ApplicationType");
variablenode_ns_1_i_993_variant_DataContents[4].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_993_variant_DataContents[4].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_993_variant_DataContents[5], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_993_variant_DataContents[5].name = UA_STRING("ProductUri");
variablenode_ns_1_i_993_variant_DataContents[5].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_993_variant_DataContents[5].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_993_variant_DataContents[6], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_993_variant_DataContents[6].name = UA_STRING("Capabilities");
variablenode_ns_1_i_993_variant_DataContents[6].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_993_variant_DataContents[6].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_993_variant_DataContents6_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_993_variant_DataContents6_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_993_variant_DataContents6_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_993_variant_DataContents[6].arrayDimensionsSize = 1;
variablenode_ns_1_i_993_variant_DataContents[6].arrayDimensions = variablenode_ns_1_i_993_variant_DataContents6_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_993_variant_DataContents, (UA_Int32) 7, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 993LU),
UA_NODEID_NUMERIC(ns[1], 992LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;







return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_127_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 993LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CertificateGroups - ns=1;i=614 */

static UA_StatusCode function_gds_nodeset_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateGroups");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 614LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CertificateGroups"),
UA_NODEID_NUMERIC(ns[0], 13813LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 614LU)
);
}

/* DefaultUserTokenGroup - ns=1;i=683 */

static UA_StatusCode function_gds_nodeset_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultUserTokenGroup");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 683LU),
UA_NODEID_NUMERIC(ns[1], 614LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DefaultUserTokenGroup"),
UA_NODEID_NUMERIC(ns[0], 12555LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 683LU), UA_NODEID_NUMERIC(ns[0], 9006LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 13225LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 683LU)
);
}

/* CertificateTypes - ns=1;i=716 */

static UA_StatusCode function_gds_nodeset_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 716LU),
UA_NODEID_NUMERIC(ns[1], 683LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "CertificateTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 716LU)
);
}

/* TrustList - ns=1;i=684 */

static UA_StatusCode function_gds_nodeset_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TrustList");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[1], 683LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "TrustList"),
UA_NODEID_NUMERIC(ns[0], 12522LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 684LU)
);
}

/* RemoveCertificate - ns=1;i=714 */

static UA_StatusCode function_gds_nodeset_132_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 714LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RemoveCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_132_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 714LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=715 */

static UA_StatusCode function_gds_nodeset_133_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_715_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_715_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_715_variant_DataContents[0].name = UA_STRING("Thumbprint");
variablenode_ns_1_i_715_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_715_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_715_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_715_variant_DataContents[1].name = UA_STRING("IsTrustedCertificate");
variablenode_ns_1_i_715_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_715_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_715_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 715LU),
UA_NODEID_NUMERIC(ns[1], 714LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_133_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 715LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddCertificate - ns=1;i=712 */

static UA_StatusCode function_gds_nodeset_134_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 712LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AddCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_134_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 712LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=713 */

static UA_StatusCode function_gds_nodeset_135_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_713_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_713_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_713_variant_DataContents[0].name = UA_STRING("Certificate");
variablenode_ns_1_i_713_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_713_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_713_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_713_variant_DataContents[1].name = UA_STRING("IsTrustedCertificate");
variablenode_ns_1_i_713_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_713_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_713_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 713LU),
UA_NODEID_NUMERIC(ns[1], 712LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_135_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 713LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CloseAndUpdate - ns=1;i=709 */

static UA_StatusCode function_gds_nodeset_136_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CloseAndUpdate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 709LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CloseAndUpdate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_136_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 709LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=711 */

static UA_StatusCode function_gds_nodeset_137_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_711_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_711_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_711_variant_DataContents[0].name = UA_STRING("ApplyChangesRequired");
variablenode_ns_1_i_711_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_711_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_711_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 711LU),
UA_NODEID_NUMERIC(ns[1], 709LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_137_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 711LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=710 */

static UA_StatusCode function_gds_nodeset_138_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_710_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_710_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_710_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_710_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_710_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_710_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 710LU),
UA_NODEID_NUMERIC(ns[1], 709LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_138_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 710LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OpenWithMasks - ns=1;i=706 */

static UA_StatusCode function_gds_nodeset_139_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "OpenWithMasks");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 706LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "OpenWithMasks"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_139_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 706LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=708 */

static UA_StatusCode function_gds_nodeset_140_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_708_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_708_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_708_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_708_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_708_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_708_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 708LU),
UA_NODEID_NUMERIC(ns[1], 706LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_140_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 708LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=707 */

static UA_StatusCode function_gds_nodeset_141_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_707_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_707_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_707_variant_DataContents[0].name = UA_STRING("Masks");
variablenode_ns_1_i_707_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_707_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_707_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 707LU),
UA_NODEID_NUMERIC(ns[1], 706LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_141_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 707LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* LastUpdateTime - ns=1;i=705 */

static UA_StatusCode function_gds_nodeset_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LastUpdateTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 705LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "LastUpdateTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 705LU)
);
}

/* SetPosition - ns=1;i=703 */

static UA_StatusCode function_gds_nodeset_143_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetPosition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 703LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_143_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 703LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=704 */

static UA_StatusCode function_gds_nodeset_144_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_704_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_704_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_704_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_704_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_704_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_704_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_704_variant_DataContents[1].name = UA_STRING("Position");
variablenode_ns_1_i_704_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
variablenode_ns_1_i_704_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_704_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 704LU),
UA_NODEID_NUMERIC(ns[1], 703LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_144_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 704LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetPosition - ns=1;i=700 */

static UA_StatusCode function_gds_nodeset_145_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetPosition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 700LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "GetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_145_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 700LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=702 */

static UA_StatusCode function_gds_nodeset_146_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_702_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_702_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_702_variant_DataContents[0].name = UA_STRING("Position");
variablenode_ns_1_i_702_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
variablenode_ns_1_i_702_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_702_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 702LU),
UA_NODEID_NUMERIC(ns[1], 700LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_146_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 702LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=701 */

static UA_StatusCode function_gds_nodeset_147_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_701_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_701_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_701_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_701_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_701_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_701_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 701LU),
UA_NODEID_NUMERIC(ns[1], 700LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_147_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 701LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Write - ns=1;i=698 */

static UA_StatusCode function_gds_nodeset_148_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Write");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 698LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Write"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_148_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 698LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=699 */

static UA_StatusCode function_gds_nodeset_149_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_699_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_699_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_699_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_699_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_699_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_699_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_699_variant_DataContents[1].name = UA_STRING("Data");
variablenode_ns_1_i_699_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_699_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_699_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 699LU),
UA_NODEID_NUMERIC(ns[1], 698LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_149_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 699LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Read - ns=1;i=695 */

static UA_StatusCode function_gds_nodeset_150_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Read");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 695LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Read"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_150_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 695LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=697 */

static UA_StatusCode function_gds_nodeset_151_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_697_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_697_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_697_variant_DataContents[0].name = UA_STRING("Data");
variablenode_ns_1_i_697_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_697_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_697_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 697LU),
UA_NODEID_NUMERIC(ns[1], 695LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_151_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 697LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=696 */

static UA_StatusCode function_gds_nodeset_152_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_696_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_696_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_696_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_696_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_696_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_696_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_696_variant_DataContents[1].name = UA_STRING("Length");
variablenode_ns_1_i_696_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_696_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_696_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 696LU),
UA_NODEID_NUMERIC(ns[1], 695LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_152_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 696LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Close - ns=1;i=693 */

static UA_StatusCode function_gds_nodeset_153_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Close");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 693LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Close"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_153_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 693LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=694 */

static UA_StatusCode function_gds_nodeset_154_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_694_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_694_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_694_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_694_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_694_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_694_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 694LU),
UA_NODEID_NUMERIC(ns[1], 693LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_154_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 694LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Open - ns=1;i=690 */

static UA_StatusCode function_gds_nodeset_155_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Open");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 690LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Open"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_155_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 690LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=692 */

static UA_StatusCode function_gds_nodeset_156_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_692_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_692_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_692_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_692_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_692_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_692_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 692LU),
UA_NODEID_NUMERIC(ns[1], 690LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_156_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 692LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=691 */

static UA_StatusCode function_gds_nodeset_157_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_691_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_691_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_691_variant_DataContents[0].name = UA_STRING("Mode");
variablenode_ns_1_i_691_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
variablenode_ns_1_i_691_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_691_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 691LU),
UA_NODEID_NUMERIC(ns[1], 690LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_157_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 691LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OpenCount - ns=1;i=688 */

static UA_StatusCode function_gds_nodeset_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "OpenCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 688LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OpenCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 688LU)
);
}

/* UserWritable - ns=1;i=687 */

static UA_StatusCode function_gds_nodeset_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UserWritable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 687LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "UserWritable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 687LU)
);
}

/* Writable - ns=1;i=686 */

static UA_StatusCode function_gds_nodeset_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Writable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 686LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Writable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 686LU)
);
}

/* Size - ns=1;i=685 */

static UA_StatusCode function_gds_nodeset_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Size");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 685LU),
UA_NODEID_NUMERIC(ns[1], 684LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Size"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 685LU)
);
}

/* DefaultHttpsGroup - ns=1;i=649 */

static UA_StatusCode function_gds_nodeset_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultHttpsGroup");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 649LU),
UA_NODEID_NUMERIC(ns[1], 614LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DefaultHttpsGroup"),
UA_NODEID_NUMERIC(ns[0], 12555LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 649LU), UA_NODEID_NUMERIC(ns[0], 9006LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 13225LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 649LU)
);
}

/* CertificateTypes - ns=1;i=682 */

static UA_StatusCode function_gds_nodeset_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 682LU),
UA_NODEID_NUMERIC(ns[1], 649LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "CertificateTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 682LU)
);
}

/* TrustList - ns=1;i=650 */

static UA_StatusCode function_gds_nodeset_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TrustList");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[1], 649LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "TrustList"),
UA_NODEID_NUMERIC(ns[0], 12522LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 650LU)
);
}

/* RemoveCertificate - ns=1;i=680 */

static UA_StatusCode function_gds_nodeset_165_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 680LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RemoveCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_165_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 680LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=681 */

static UA_StatusCode function_gds_nodeset_166_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_681_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_681_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_681_variant_DataContents[0].name = UA_STRING("Thumbprint");
variablenode_ns_1_i_681_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_681_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_681_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_681_variant_DataContents[1].name = UA_STRING("IsTrustedCertificate");
variablenode_ns_1_i_681_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_681_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_681_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 681LU),
UA_NODEID_NUMERIC(ns[1], 680LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_166_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 681LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddCertificate - ns=1;i=678 */

static UA_StatusCode function_gds_nodeset_167_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 678LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AddCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_167_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 678LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=679 */

static UA_StatusCode function_gds_nodeset_168_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_679_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_679_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_679_variant_DataContents[0].name = UA_STRING("Certificate");
variablenode_ns_1_i_679_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_679_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_679_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_679_variant_DataContents[1].name = UA_STRING("IsTrustedCertificate");
variablenode_ns_1_i_679_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_679_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_679_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 679LU),
UA_NODEID_NUMERIC(ns[1], 678LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_168_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 679LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CloseAndUpdate - ns=1;i=675 */

static UA_StatusCode function_gds_nodeset_169_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CloseAndUpdate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 675LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CloseAndUpdate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_169_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 675LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=677 */

static UA_StatusCode function_gds_nodeset_170_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_677_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_677_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_677_variant_DataContents[0].name = UA_STRING("ApplyChangesRequired");
variablenode_ns_1_i_677_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_677_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_677_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 677LU),
UA_NODEID_NUMERIC(ns[1], 675LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_170_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 677LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=676 */

static UA_StatusCode function_gds_nodeset_171_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_676_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_676_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_676_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_676_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_676_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_676_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 676LU),
UA_NODEID_NUMERIC(ns[1], 675LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_171_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 676LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OpenWithMasks - ns=1;i=672 */

static UA_StatusCode function_gds_nodeset_172_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "OpenWithMasks");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 672LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "OpenWithMasks"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_172_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 672LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=674 */

static UA_StatusCode function_gds_nodeset_173_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_674_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_674_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_674_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_674_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_674_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_674_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 674LU),
UA_NODEID_NUMERIC(ns[1], 672LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_173_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 674LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=673 */

static UA_StatusCode function_gds_nodeset_174_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_673_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_673_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_673_variant_DataContents[0].name = UA_STRING("Masks");
variablenode_ns_1_i_673_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_673_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_673_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 673LU),
UA_NODEID_NUMERIC(ns[1], 672LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_174_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 673LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* LastUpdateTime - ns=1;i=671 */

static UA_StatusCode function_gds_nodeset_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LastUpdateTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 671LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "LastUpdateTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 671LU)
);
}

/* SetPosition - ns=1;i=669 */

static UA_StatusCode function_gds_nodeset_176_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetPosition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 669LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_176_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 669LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=670 */

static UA_StatusCode function_gds_nodeset_177_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_670_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_670_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_670_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_670_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_670_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_670_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_670_variant_DataContents[1].name = UA_STRING("Position");
variablenode_ns_1_i_670_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
variablenode_ns_1_i_670_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_670_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 670LU),
UA_NODEID_NUMERIC(ns[1], 669LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_177_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 670LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetPosition - ns=1;i=666 */

static UA_StatusCode function_gds_nodeset_178_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetPosition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 666LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "GetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_178_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 666LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=668 */

static UA_StatusCode function_gds_nodeset_179_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_668_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_668_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_668_variant_DataContents[0].name = UA_STRING("Position");
variablenode_ns_1_i_668_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
variablenode_ns_1_i_668_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_668_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 668LU),
UA_NODEID_NUMERIC(ns[1], 666LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_179_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 668LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=667 */

static UA_StatusCode function_gds_nodeset_180_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_667_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_667_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_667_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_667_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_667_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_667_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 667LU),
UA_NODEID_NUMERIC(ns[1], 666LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_180_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 667LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Write - ns=1;i=664 */

static UA_StatusCode function_gds_nodeset_181_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Write");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 664LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Write"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_181_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 664LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=665 */

static UA_StatusCode function_gds_nodeset_182_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_665_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_665_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_665_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_665_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_665_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_665_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_665_variant_DataContents[1].name = UA_STRING("Data");
variablenode_ns_1_i_665_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_665_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_665_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 665LU),
UA_NODEID_NUMERIC(ns[1], 664LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_182_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 665LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Read - ns=1;i=661 */

static UA_StatusCode function_gds_nodeset_183_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Read");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 661LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Read"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_183_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 661LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=663 */

static UA_StatusCode function_gds_nodeset_184_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_663_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_663_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_663_variant_DataContents[0].name = UA_STRING("Data");
variablenode_ns_1_i_663_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_663_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_663_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 663LU),
UA_NODEID_NUMERIC(ns[1], 661LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_184_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 663LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=662 */

static UA_StatusCode function_gds_nodeset_185_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_662_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_662_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_662_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_662_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_662_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_662_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_662_variant_DataContents[1].name = UA_STRING("Length");
variablenode_ns_1_i_662_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_662_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_662_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 662LU),
UA_NODEID_NUMERIC(ns[1], 661LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_185_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 662LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Close - ns=1;i=659 */

static UA_StatusCode function_gds_nodeset_186_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Close");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 659LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Close"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_186_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 659LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=660 */

static UA_StatusCode function_gds_nodeset_187_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_660_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_660_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_660_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_660_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_660_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_660_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 660LU),
UA_NODEID_NUMERIC(ns[1], 659LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_187_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 660LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Open - ns=1;i=656 */

static UA_StatusCode function_gds_nodeset_188_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Open");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 656LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Open"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_188_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 656LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=658 */

static UA_StatusCode function_gds_nodeset_189_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_658_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_658_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_658_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_658_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_658_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_658_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 658LU),
UA_NODEID_NUMERIC(ns[1], 656LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_189_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 658LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=657 */

static UA_StatusCode function_gds_nodeset_190_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_657_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_657_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_657_variant_DataContents[0].name = UA_STRING("Mode");
variablenode_ns_1_i_657_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
variablenode_ns_1_i_657_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_657_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 657LU),
UA_NODEID_NUMERIC(ns[1], 656LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_190_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 657LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OpenCount - ns=1;i=654 */

static UA_StatusCode function_gds_nodeset_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "OpenCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 654LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OpenCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 654LU)
);
}

/* UserWritable - ns=1;i=653 */

static UA_StatusCode function_gds_nodeset_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UserWritable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 653LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "UserWritable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 653LU)
);
}

/* Writable - ns=1;i=652 */

static UA_StatusCode function_gds_nodeset_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Writable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 652LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Writable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 652LU)
);
}

/* Size - ns=1;i=651 */

static UA_StatusCode function_gds_nodeset_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Size");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 651LU),
UA_NODEID_NUMERIC(ns[1], 650LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Size"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 651LU)
);
}

/* DefaultApplicationGroup - ns=1;i=615 */

static UA_StatusCode function_gds_nodeset_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultApplicationGroup");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 615LU),
UA_NODEID_NUMERIC(ns[1], 614LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DefaultApplicationGroup"),
UA_NODEID_NUMERIC(ns[0], 12555LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 615LU), UA_NODEID_NUMERIC(ns[0], 9006LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 13225LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 615LU)
);
}

/* CertificateTypes - ns=1;i=648 */

static UA_StatusCode function_gds_nodeset_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CertificateTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 648LU),
UA_NODEID_NUMERIC(ns[1], 615LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "CertificateTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 648LU)
);
}

/* TrustList - ns=1;i=616 */

static UA_StatusCode function_gds_nodeset_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TrustList");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[1], 615LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "TrustList"),
UA_NODEID_NUMERIC(ns[0], 12522LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 616LU)
);
}

/* RemoveCertificate - ns=1;i=646 */

static UA_StatusCode function_gds_nodeset_198_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RemoveCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 646LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "RemoveCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_198_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 646LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=647 */

static UA_StatusCode function_gds_nodeset_199_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_647_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_647_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_647_variant_DataContents[0].name = UA_STRING("Thumbprint");
variablenode_ns_1_i_647_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_647_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_647_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_647_variant_DataContents[1].name = UA_STRING("IsTrustedCertificate");
variablenode_ns_1_i_647_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_647_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_647_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 647LU),
UA_NODEID_NUMERIC(ns[1], 646LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_199_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 647LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AddCertificate - ns=1;i=644 */

static UA_StatusCode function_gds_nodeset_200_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "AddCertificate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 644LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "AddCertificate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_200_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 644LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=645 */

static UA_StatusCode function_gds_nodeset_201_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_645_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_645_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_645_variant_DataContents[0].name = UA_STRING("Certificate");
variablenode_ns_1_i_645_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_645_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_645_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_645_variant_DataContents[1].name = UA_STRING("IsTrustedCertificate");
variablenode_ns_1_i_645_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_645_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_645_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 645LU),
UA_NODEID_NUMERIC(ns[1], 644LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_201_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 645LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CloseAndUpdate - ns=1;i=641 */

static UA_StatusCode function_gds_nodeset_202_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CloseAndUpdate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 641LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CloseAndUpdate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_202_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 641LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=643 */

static UA_StatusCode function_gds_nodeset_203_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_643_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_643_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_643_variant_DataContents[0].name = UA_STRING("ApplyChangesRequired");
variablenode_ns_1_i_643_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_643_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_643_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 643LU),
UA_NODEID_NUMERIC(ns[1], 641LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_203_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 643LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=642 */

static UA_StatusCode function_gds_nodeset_204_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_642_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_642_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_642_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_642_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_642_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_642_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 642LU),
UA_NODEID_NUMERIC(ns[1], 641LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_204_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 642LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OpenWithMasks - ns=1;i=638 */

static UA_StatusCode function_gds_nodeset_205_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "OpenWithMasks");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 638LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "OpenWithMasks"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_205_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 638LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=640 */

static UA_StatusCode function_gds_nodeset_206_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_640_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_640_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_640_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_640_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_640_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_640_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 640LU),
UA_NODEID_NUMERIC(ns[1], 638LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_206_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 640LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=639 */

static UA_StatusCode function_gds_nodeset_207_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_639_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_639_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_639_variant_DataContents[0].name = UA_STRING("Masks");
variablenode_ns_1_i_639_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_639_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_639_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 639LU),
UA_NODEID_NUMERIC(ns[1], 638LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_207_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 639LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* LastUpdateTime - ns=1;i=637 */

static UA_StatusCode function_gds_nodeset_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LastUpdateTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 637LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "LastUpdateTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 637LU)
);
}

/* SetPosition - ns=1;i=635 */

static UA_StatusCode function_gds_nodeset_209_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetPosition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 635LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "SetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_209_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 635LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=636 */

static UA_StatusCode function_gds_nodeset_210_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_636_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_636_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_636_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_636_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_636_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_636_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_636_variant_DataContents[1].name = UA_STRING("Position");
variablenode_ns_1_i_636_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
variablenode_ns_1_i_636_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_636_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 636LU),
UA_NODEID_NUMERIC(ns[1], 635LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_210_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 636LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetPosition - ns=1;i=632 */

static UA_StatusCode function_gds_nodeset_211_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetPosition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 632LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "GetPosition"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_211_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 632LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=634 */

static UA_StatusCode function_gds_nodeset_212_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_634_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_634_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_634_variant_DataContents[0].name = UA_STRING("Position");
variablenode_ns_1_i_634_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
variablenode_ns_1_i_634_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_634_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 634LU),
UA_NODEID_NUMERIC(ns[1], 632LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_212_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 634LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=633 */

static UA_StatusCode function_gds_nodeset_213_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_633_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_633_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_633_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_633_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_633_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_633_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 633LU),
UA_NODEID_NUMERIC(ns[1], 632LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_213_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 633LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Write - ns=1;i=630 */

static UA_StatusCode function_gds_nodeset_214_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Write");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 630LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Write"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_214_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 630LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=631 */

static UA_StatusCode function_gds_nodeset_215_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_631_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_631_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_631_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_631_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_631_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_631_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_631_variant_DataContents[1].name = UA_STRING("Data");
variablenode_ns_1_i_631_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_631_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_631_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 631LU),
UA_NODEID_NUMERIC(ns[1], 630LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_215_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 631LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Read - ns=1;i=627 */

static UA_StatusCode function_gds_nodeset_216_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Read");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 627LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Read"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_216_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 627LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=629 */

static UA_StatusCode function_gds_nodeset_217_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_629_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_629_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_629_variant_DataContents[0].name = UA_STRING("Data");
variablenode_ns_1_i_629_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_629_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_629_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 629LU),
UA_NODEID_NUMERIC(ns[1], 627LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_217_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 629LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=628 */

static UA_StatusCode function_gds_nodeset_218_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_628_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_628_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_628_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_628_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_628_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_628_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_628_variant_DataContents[1].name = UA_STRING("Length");
variablenode_ns_1_i_628_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_628_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_628_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 628LU),
UA_NODEID_NUMERIC(ns[1], 627LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_218_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 628LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Close - ns=1;i=625 */

static UA_StatusCode function_gds_nodeset_219_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Close");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 625LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Close"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_219_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 625LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=626 */

static UA_StatusCode function_gds_nodeset_220_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_626_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_626_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_626_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_626_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_626_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_626_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 626LU),
UA_NODEID_NUMERIC(ns[1], 625LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_220_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 626LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Open - ns=1;i=622 */

static UA_StatusCode function_gds_nodeset_221_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Open");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 622LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Open"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_221_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 622LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=624 */

static UA_StatusCode function_gds_nodeset_222_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_624_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_624_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_624_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_624_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_624_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_624_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 624LU),
UA_NODEID_NUMERIC(ns[1], 622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_222_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 624LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=623 */

static UA_StatusCode function_gds_nodeset_223_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_623_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_623_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_623_variant_DataContents[0].name = UA_STRING("Mode");
variablenode_ns_1_i_623_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
variablenode_ns_1_i_623_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_623_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 623LU),
UA_NODEID_NUMERIC(ns[1], 622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_223_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 623LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OpenCount - ns=1;i=620 */

static UA_StatusCode function_gds_nodeset_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5LU);
attr.displayName = UA_LOCALIZEDTEXT("", "OpenCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 620LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OpenCount"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 620LU)
);
}

/* UserWritable - ns=1;i=619 */

static UA_StatusCode function_gds_nodeset_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UserWritable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 619LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "UserWritable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 619LU)
);
}

/* Writable - ns=1;i=618 */

static UA_StatusCode function_gds_nodeset_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Writable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 618LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Writable"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 618LU)
);
}

/* Size - ns=1;i=617 */

static UA_StatusCode function_gds_nodeset_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 9LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Size");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 617LU),
UA_NODEID_NUMERIC(ns[1], 616LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Size"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 617LU)
);
}

/* GetCertificateGroups - ns=1;i=508 */

static UA_StatusCode function_gds_nodeset_228_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetCertificateGroups");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 508LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetCertificateGroups"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_228_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 508LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=510 */

static UA_StatusCode function_gds_nodeset_229_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_510_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_510_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_510_variant_DataContents[0].name = UA_STRING("CertificateGroupIds");
variablenode_ns_1_i_510_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_510_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_510_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_510_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_510_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_510_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_1_i_510_variant_DataContents[0].arrayDimensions = variablenode_ns_1_i_510_variant_DataContents0_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_510_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 510LU),
UA_NODEID_NUMERIC(ns[1], 508LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_229_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 510LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=509 */

static UA_StatusCode function_gds_nodeset_230_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_509_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_509_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_509_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_509_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_509_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_509_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 509LU),
UA_NODEID_NUMERIC(ns[1], 508LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_230_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 509LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetCertificateStatus - ns=1;i=225 */

static UA_StatusCode function_gds_nodeset_231_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetCertificateStatus");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 225LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetCertificateStatus"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_231_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 225LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=227 */

static UA_StatusCode function_gds_nodeset_232_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_227_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_227_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_227_variant_DataContents[0].name = UA_STRING("UpdateRequired");
variablenode_ns_1_i_227_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_227_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_227_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 227LU),
UA_NODEID_NUMERIC(ns[1], 225LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_232_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 227LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=226 */

static UA_StatusCode function_gds_nodeset_233_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_226_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_226_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_226_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_226_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_226_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_226_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_226_variant_DataContents[1].name = UA_STRING("CertificateGroupId");
variablenode_ns_1_i_226_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_226_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_226_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_226_variant_DataContents[2].name = UA_STRING("CertificateTypeId");
variablenode_ns_1_i_226_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_226_variant_DataContents[2].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_226_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 226LU),
UA_NODEID_NUMERIC(ns[1], 225LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;



return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_233_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 226LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetApplication - ns=1;i=216 */

static UA_StatusCode function_gds_nodeset_234_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetApplication");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 216LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetApplication"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_234_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 216LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=218 */

static UA_StatusCode function_gds_nodeset_235_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_218_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_218_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_218_variant_DataContents[0].name = UA_STRING("Application");
variablenode_ns_1_i_218_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[1], 1LU);
variablenode_ns_1_i_218_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_218_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 218LU),
UA_NODEID_NUMERIC(ns[1], 216LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_235_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 218LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=217 */

static UA_StatusCode function_gds_nodeset_236_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_217_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_217_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_217_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_217_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_217_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_217_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 217LU),
UA_NODEID_NUMERIC(ns[1], 216LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_236_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 217LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetTrustList - ns=1;i=204 */

static UA_StatusCode function_gds_nodeset_237_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetTrustList");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 204LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetTrustList"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_237_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 204LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=206 */

static UA_StatusCode function_gds_nodeset_238_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_206_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_206_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_206_variant_DataContents[0].name = UA_STRING("TrustListId");
variablenode_ns_1_i_206_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_206_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_206_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 206LU),
UA_NODEID_NUMERIC(ns[1], 204LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_238_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 206LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=205 */

static UA_StatusCode function_gds_nodeset_239_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_205_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_205_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_205_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_205_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_205_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_205_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_205_variant_DataContents[1].name = UA_STRING("CertificateGroupId");
variablenode_ns_1_i_205_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_205_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_205_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 205LU),
UA_NODEID_NUMERIC(ns[1], 204LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_239_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 205LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* UpdateApplication - ns=1;i=200 */

static UA_StatusCode function_gds_nodeset_240_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "UpdateApplication");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 200LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "UpdateApplication"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_240_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 200LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=201 */

static UA_StatusCode function_gds_nodeset_241_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_201_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_201_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_201_variant_DataContents[0].name = UA_STRING("Application");
variablenode_ns_1_i_201_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[1], 1LU);
variablenode_ns_1_i_201_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_201_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 201LU),
UA_NODEID_NUMERIC(ns[1], 200LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_241_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 201LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* FinishRequest - ns=1;i=163 */

static UA_StatusCode function_gds_nodeset_242_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FinishRequest");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 163LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FinishRequest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_242_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 163LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=165 */

static UA_StatusCode function_gds_nodeset_243_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_165_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_165_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_165_variant_DataContents[0].name = UA_STRING("Certificate");
variablenode_ns_1_i_165_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_165_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_165_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_165_variant_DataContents[1].name = UA_STRING("PrivateKey");
variablenode_ns_1_i_165_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_165_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_165_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_165_variant_DataContents[2].name = UA_STRING("IssuerCertificates");
variablenode_ns_1_i_165_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_165_variant_DataContents[2].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_165_variant_DataContents2_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_165_variant_DataContents2_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_165_variant_DataContents2_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_165_variant_DataContents[2].arrayDimensionsSize = 1;
variablenode_ns_1_i_165_variant_DataContents[2].arrayDimensions = variablenode_ns_1_i_165_variant_DataContents2_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_165_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 165LU),
UA_NODEID_NUMERIC(ns[1], 163LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;



return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_243_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 165LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=164 */

static UA_StatusCode function_gds_nodeset_244_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_164_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_164_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_164_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_164_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_164_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_164_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_164_variant_DataContents[1].name = UA_STRING("RequestId");
variablenode_ns_1_i_164_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_164_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_164_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 164LU),
UA_NODEID_NUMERIC(ns[1], 163LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_244_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 164LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* StartSigningRequest - ns=1;i=157 */

static UA_StatusCode function_gds_nodeset_245_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "StartSigningRequest");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 157LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "StartSigningRequest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_245_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 157LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=159 */

static UA_StatusCode function_gds_nodeset_246_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_159_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_159_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_159_variant_DataContents[0].name = UA_STRING("RequestId");
variablenode_ns_1_i_159_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_159_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_159_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 159LU),
UA_NODEID_NUMERIC(ns[1], 157LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_246_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 159LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=158 */

static UA_StatusCode function_gds_nodeset_247_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 4;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_158_variant_DataContents[4];

UA_init(&variablenode_ns_1_i_158_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_158_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_158_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_158_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_158_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_158_variant_DataContents[1].name = UA_STRING("CertificateGroupId");
variablenode_ns_1_i_158_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_158_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_158_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_158_variant_DataContents[2].name = UA_STRING("CertificateTypeId");
variablenode_ns_1_i_158_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_158_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_158_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_158_variant_DataContents[3].name = UA_STRING("CertificateRequest");
variablenode_ns_1_i_158_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_158_variant_DataContents[3].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_158_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 158LU),
UA_NODEID_NUMERIC(ns[1], 157LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;




return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_247_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 158LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* StartNewKeyPairRequest - ns=1;i=154 */

static UA_StatusCode function_gds_nodeset_248_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "StartNewKeyPairRequest");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 154LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "StartNewKeyPairRequest"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_248_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 154LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=156 */

static UA_StatusCode function_gds_nodeset_249_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_156_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_156_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_156_variant_DataContents[0].name = UA_STRING("RequestId");
variablenode_ns_1_i_156_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_156_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_156_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 156LU),
UA_NODEID_NUMERIC(ns[1], 154LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_249_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 156LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=155 */

static UA_StatusCode function_gds_nodeset_250_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 7;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_155_variant_DataContents[7];

UA_init(&variablenode_ns_1_i_155_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_155_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_155_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_155_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_155_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_155_variant_DataContents[1].name = UA_STRING("CertificateGroupId");
variablenode_ns_1_i_155_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_155_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_155_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_155_variant_DataContents[2].name = UA_STRING("CertificateTypeId");
variablenode_ns_1_i_155_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_155_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_155_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_155_variant_DataContents[3].name = UA_STRING("SubjectName");
variablenode_ns_1_i_155_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_155_variant_DataContents[3].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_155_variant_DataContents[4], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_155_variant_DataContents[4].name = UA_STRING("DomainNames");
variablenode_ns_1_i_155_variant_DataContents[4].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_155_variant_DataContents[4].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_155_variant_DataContents4_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_155_variant_DataContents4_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_155_variant_DataContents4_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_155_variant_DataContents[4].arrayDimensionsSize = 1;
variablenode_ns_1_i_155_variant_DataContents[4].arrayDimensions = variablenode_ns_1_i_155_variant_DataContents4_arrayDimensions;

UA_init(&variablenode_ns_1_i_155_variant_DataContents[5], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_155_variant_DataContents[5].name = UA_STRING("PrivateKeyFormat");
variablenode_ns_1_i_155_variant_DataContents[5].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_155_variant_DataContents[5].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_155_variant_DataContents[6], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_155_variant_DataContents[6].name = UA_STRING("PrivateKeyPassword");
variablenode_ns_1_i_155_variant_DataContents[6].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_155_variant_DataContents[6].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_155_variant_DataContents, (UA_Int32) 7, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 155LU),
UA_NODEID_NUMERIC(ns[1], 154LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;







return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_250_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 155LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* QueryServers - ns=1;i=151 */

static UA_StatusCode function_gds_nodeset_251_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "QueryServers");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 151LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "QueryServers"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_251_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 151LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=153 */

static UA_StatusCode function_gds_nodeset_252_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_153_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_153_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_153_variant_DataContents[0].name = UA_STRING("LastCounterResetTime");
variablenode_ns_1_i_153_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
variablenode_ns_1_i_153_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_153_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_153_variant_DataContents[1].name = UA_STRING("Servers");
variablenode_ns_1_i_153_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 12189LU);
variablenode_ns_1_i_153_variant_DataContents[1].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_153_variant_DataContents1_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_153_variant_DataContents1_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_153_variant_DataContents1_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_153_variant_DataContents[1].arrayDimensionsSize = 1;
variablenode_ns_1_i_153_variant_DataContents[1].arrayDimensions = variablenode_ns_1_i_153_variant_DataContents1_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_153_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 153LU),
UA_NODEID_NUMERIC(ns[1], 151LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_252_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 153LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=152 */

static UA_StatusCode function_gds_nodeset_253_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_152_variant_DataContents[6];

UA_init(&variablenode_ns_1_i_152_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_152_variant_DataContents[0].name = UA_STRING("StartingRecordId");
variablenode_ns_1_i_152_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_152_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_152_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_152_variant_DataContents[1].name = UA_STRING("MaxRecordsToReturn");
variablenode_ns_1_i_152_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_152_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_152_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_152_variant_DataContents[2].name = UA_STRING("ApplicationName");
variablenode_ns_1_i_152_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_152_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_152_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_152_variant_DataContents[3].name = UA_STRING("ApplicationUri");
variablenode_ns_1_i_152_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_152_variant_DataContents[3].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_152_variant_DataContents[4], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_152_variant_DataContents[4].name = UA_STRING("ProductUri");
variablenode_ns_1_i_152_variant_DataContents[4].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_152_variant_DataContents[4].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_152_variant_DataContents[5], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_152_variant_DataContents[5].name = UA_STRING("ServerCapabilities");
variablenode_ns_1_i_152_variant_DataContents[5].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_152_variant_DataContents[5].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_152_variant_DataContents5_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_152_variant_DataContents5_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_152_variant_DataContents5_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_152_variant_DataContents[5].arrayDimensionsSize = 1;
variablenode_ns_1_i_152_variant_DataContents[5].arrayDimensions = variablenode_ns_1_i_152_variant_DataContents5_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_152_variant_DataContents, (UA_Int32) 6, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 152LU),
UA_NODEID_NUMERIC(ns[1], 151LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;






return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_253_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 152LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* UnregisterApplication - ns=1;i=149 */

static UA_StatusCode function_gds_nodeset_254_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "UnregisterApplication");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 149LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "UnregisterApplication"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_254_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 149LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=150 */

static UA_StatusCode function_gds_nodeset_255_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_150_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_150_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_150_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_150_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_150_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_150_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 150LU),
UA_NODEID_NUMERIC(ns[1], 149LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_255_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 150LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RegisterApplication - ns=1;i=146 */

static UA_StatusCode function_gds_nodeset_256_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RegisterApplication");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 146LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "RegisterApplication"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_256_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 146LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=148 */

static UA_StatusCode function_gds_nodeset_257_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_148_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_148_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_148_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_148_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_148_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_148_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 148LU),
UA_NODEID_NUMERIC(ns[1], 146LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_257_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 148LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=147 */

static UA_StatusCode function_gds_nodeset_258_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_147_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_147_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_147_variant_DataContents[0].name = UA_STRING("Application");
variablenode_ns_1_i_147_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[1], 1LU);
variablenode_ns_1_i_147_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_147_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 147LU),
UA_NODEID_NUMERIC(ns[1], 146LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_258_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 147LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* FindApplications - ns=1;i=143 */

static UA_StatusCode function_gds_nodeset_259_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FindApplications");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 143LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FindApplications"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_259_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 143LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=145 */

static UA_StatusCode function_gds_nodeset_260_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_145_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_145_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_145_variant_DataContents[0].name = UA_STRING("Applications");
variablenode_ns_1_i_145_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[1], 1LU);
variablenode_ns_1_i_145_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_145_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_145_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_145_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_145_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_1_i_145_variant_DataContents[0].arrayDimensions = variablenode_ns_1_i_145_variant_DataContents0_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_145_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 145LU),
UA_NODEID_NUMERIC(ns[1], 143LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_260_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 145LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=144 */

static UA_StatusCode function_gds_nodeset_261_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_144_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_144_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_144_variant_DataContents[0].name = UA_STRING("ApplicationUri");
variablenode_ns_1_i_144_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_144_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_144_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 144LU),
UA_NODEID_NUMERIC(ns[1], 143LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_261_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 144LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Applications - ns=1;i=142 */

static UA_StatusCode function_gds_nodeset_262_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Applications");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 142LU),
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Applications"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_262_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 142LU)
);
}

/* CheckRevocationStatus - ns=1;i=126 */

static UA_StatusCode function_gds_nodeset_263_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CheckRevocationStatus");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 126LU),
UA_NODEID_NUMERIC(ns[1], 63LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CheckRevocationStatus"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 126LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_263_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 126LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=161 */

static UA_StatusCode function_gds_nodeset_264_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_161_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_161_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_161_variant_DataContents[0].name = UA_STRING("CertificateStatus");
variablenode_ns_1_i_161_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 19LU);
variablenode_ns_1_i_161_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_161_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_161_variant_DataContents[1].name = UA_STRING("ValidityTime");
variablenode_ns_1_i_161_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
variablenode_ns_1_i_161_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_161_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 161LU),
UA_NODEID_NUMERIC(ns[1], 126LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 161LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_264_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 161LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=160 */

static UA_StatusCode function_gds_nodeset_265_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_160_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_160_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_160_variant_DataContents[0].name = UA_STRING("Certificate");
variablenode_ns_1_i_160_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_160_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_160_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 160LU),
UA_NODEID_NUMERIC(ns[1], 126LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 160LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_265_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 160LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* QueryServers - ns=1;i=23 */

static UA_StatusCode function_gds_nodeset_266_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "QueryServers");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 23LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "QueryServers"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 23LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_266_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 23LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=25 */

static UA_StatusCode function_gds_nodeset_267_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_25_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_25_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_25_variant_DataContents[0].name = UA_STRING("LastCounterResetTime");
variablenode_ns_1_i_25_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
variablenode_ns_1_i_25_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_25_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_25_variant_DataContents[1].name = UA_STRING("Servers");
variablenode_ns_1_i_25_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 12189LU);
variablenode_ns_1_i_25_variant_DataContents[1].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_25_variant_DataContents1_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_25_variant_DataContents1_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_25_variant_DataContents1_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_25_variant_DataContents[1].arrayDimensionsSize = 1;
variablenode_ns_1_i_25_variant_DataContents[1].arrayDimensions = variablenode_ns_1_i_25_variant_DataContents1_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_25_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 25LU),
UA_NODEID_NUMERIC(ns[1], 23LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 25LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_267_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 25LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=24 */

static UA_StatusCode function_gds_nodeset_268_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 6;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_24_variant_DataContents[6];

UA_init(&variablenode_ns_1_i_24_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_24_variant_DataContents[0].name = UA_STRING("StartingRecordId");
variablenode_ns_1_i_24_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_24_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_24_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_24_variant_DataContents[1].name = UA_STRING("MaxRecordsToReturn");
variablenode_ns_1_i_24_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_24_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_24_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_24_variant_DataContents[2].name = UA_STRING("ApplicationName");
variablenode_ns_1_i_24_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_24_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_24_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_24_variant_DataContents[3].name = UA_STRING("ApplicationUri");
variablenode_ns_1_i_24_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_24_variant_DataContents[3].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_24_variant_DataContents[4], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_24_variant_DataContents[4].name = UA_STRING("ProductUri");
variablenode_ns_1_i_24_variant_DataContents[4].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_24_variant_DataContents[4].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_24_variant_DataContents[5], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_24_variant_DataContents[5].name = UA_STRING("ServerCapabilities");
variablenode_ns_1_i_24_variant_DataContents[5].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_24_variant_DataContents[5].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_24_variant_DataContents5_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_24_variant_DataContents5_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_24_variant_DataContents5_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_24_variant_DataContents[5].arrayDimensionsSize = 1;
variablenode_ns_1_i_24_variant_DataContents[5].arrayDimensions = variablenode_ns_1_i_24_variant_DataContents5_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_24_variant_DataContents, (UA_Int32) 6, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24LU),
UA_NODEID_NUMERIC(ns[1], 23LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;






retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 24LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_268_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetApplication - ns=1;i=210 */

static UA_StatusCode function_gds_nodeset_269_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetApplication");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 210LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetApplication"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 210LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_269_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 210LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=212 */

static UA_StatusCode function_gds_nodeset_270_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_212_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_212_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_212_variant_DataContents[0].name = UA_STRING("Application");
variablenode_ns_1_i_212_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[1], 1LU);
variablenode_ns_1_i_212_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_212_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 212LU),
UA_NODEID_NUMERIC(ns[1], 210LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 212LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_270_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 212LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=211 */

static UA_StatusCode function_gds_nodeset_271_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_211_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_211_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_211_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_211_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_211_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_211_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 211LU),
UA_NODEID_NUMERIC(ns[1], 210LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 211LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_271_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 211LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* UnregisterApplication - ns=1;i=21 */

static UA_StatusCode function_gds_nodeset_272_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "UnregisterApplication");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 21LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "UnregisterApplication"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 21LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_272_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 21LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=22 */

static UA_StatusCode function_gds_nodeset_273_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_22_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_22_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_22_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_22_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_22_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_22_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 22LU),
UA_NODEID_NUMERIC(ns[1], 21LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 22LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_273_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 22LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* UpdateApplication - ns=1;i=188 */

static UA_StatusCode function_gds_nodeset_274_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "UpdateApplication");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 188LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "UpdateApplication"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 188LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_274_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 188LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=189 */

static UA_StatusCode function_gds_nodeset_275_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_189_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_189_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_189_variant_DataContents[0].name = UA_STRING("Application");
variablenode_ns_1_i_189_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[1], 1LU);
variablenode_ns_1_i_189_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_189_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 189LU),
UA_NODEID_NUMERIC(ns[1], 188LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 189LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_275_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 189LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RegisterApplication - ns=1;i=18 */

static UA_StatusCode function_gds_nodeset_276_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RegisterApplication");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 18LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "RegisterApplication"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 18LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_276_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 18LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=20 */

static UA_StatusCode function_gds_nodeset_277_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_20_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_20_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_20_variant_DataContents[0].name = UA_STRING("ApplicationId");
variablenode_ns_1_i_20_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_20_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_20_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20LU),
UA_NODEID_NUMERIC(ns[1], 18LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 20LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_277_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=19 */

static UA_StatusCode function_gds_nodeset_278_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_19_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_19_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_19_variant_DataContents[0].name = UA_STRING("Application");
variablenode_ns_1_i_19_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[1], 1LU);
variablenode_ns_1_i_19_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_19_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 19LU),
UA_NODEID_NUMERIC(ns[1], 18LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 19LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_278_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 19LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* FindApplications - ns=1;i=15 */

static UA_StatusCode function_gds_nodeset_279_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FindApplications");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 15LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FindApplications"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_279_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=17 */

static UA_StatusCode function_gds_nodeset_280_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_17_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_17_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_17_variant_DataContents[0].name = UA_STRING("Applications");
variablenode_ns_1_i_17_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[1], 1LU);
variablenode_ns_1_i_17_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_17_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_17_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_17_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_17_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_1_i_17_variant_DataContents[0].arrayDimensions = variablenode_ns_1_i_17_variant_DataContents0_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_17_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 17LU),
UA_NODEID_NUMERIC(ns[1], 15LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 17LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_280_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 17LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=16 */

static UA_StatusCode function_gds_nodeset_281_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_16_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_16_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_16_variant_DataContents[0].name = UA_STRING("ApplicationUri");
variablenode_ns_1_i_16_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_16_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_16_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16LU),
UA_NODEID_NUMERIC(ns[1], 15LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 16LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_gds_nodeset_281_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Applications - ns=1;i=14 */

static UA_StatusCode function_gds_nodeset_282_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Applications");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 14LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Applications"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 14LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_282_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 14LU)
);
}

/* http://opcfoundation.org/UA/GDS/ - ns=1;i=721 */

static UA_StatusCode function_gds_nodeset_283_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://opcfoundation.org/UA/GDS/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 11715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "http://opcfoundation.org/UA/GDS/"),
UA_NODEID_NUMERIC(ns[0], 11616LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_283_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 721LU)
);
}

/* DefaultAccessRestrictions - ns=1;i=864 */

static UA_StatusCode function_gds_nodeset_284_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 95LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultAccessRestrictions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 864LU),
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultAccessRestrictions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_284_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 864LU)
);
}

/* DefaultUserRolePermissions - ns=1;i=863 */

static UA_StatusCode function_gds_nodeset_285_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 96LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultUserRolePermissions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 863LU),
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultUserRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_285_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 863LU)
);
}

/* DefaultRolePermissions - ns=1;i=862 */

static UA_StatusCode function_gds_nodeset_286_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 96LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultRolePermissions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 862LU),
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_286_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 862LU)
);
}

/* StaticStringNodeIdPattern - ns=1;i=728 */

static UA_StatusCode function_gds_nodeset_287_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_728_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_728_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_728_variant_DataContents);
*variablenode_ns_1_i_728_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_728_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 728LU),
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_1_i_728_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_287_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 728LU)
);
}

/* StaticNumericNodeIdRange - ns=1;i=727 */

static UA_StatusCode function_gds_nodeset_288_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 291LU);
UA_String variablenode_ns_1_i_727_variant_DataContents[1];
variablenode_ns_1_i_727_variant_DataContents[0] = UA_STRING("1:2147483647");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_727_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 727LU),
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_288_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 727LU)
);
}

/* StaticNodeIdTypes - ns=1;i=726 */

static UA_StatusCode function_gds_nodeset_289_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256LU);
UA_Int32 variablenode_ns_1_i_726_variant_DataContents[1];
variablenode_ns_1_i_726_variant_DataContents[0] = (UA_Int32) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_726_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_IDTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 726LU),
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_gds_nodeset_289_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 726LU)
);
}

/* IsNamespaceSubset - ns=1;i=725 */

static UA_StatusCode function_gds_nodeset_290_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_1_i_725_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_725_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_725_variant_DataContents);
*variablenode_ns_1_i_725_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_725_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 725LU),
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_Boolean_delete(variablenode_ns_1_i_725_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_290_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 725LU)
);
}

/* NamespacePublicationDate - ns=1;i=724 */

static UA_StatusCode function_gds_nodeset_291_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
UA_DateTime *variablenode_ns_1_i_724_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_1_i_724_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_1_i_724_variant_DataContents);
*variablenode_ns_1_i_724_variant_DataContents = ( (UA_DateTime)(1667260800000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_724_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 724LU),
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_DateTime_delete(variablenode_ns_1_i_724_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_291_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 724LU)
);
}

/* NamespaceVersion - ns=1;i=723 */

static UA_StatusCode function_gds_nodeset_292_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_723_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_723_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_723_variant_DataContents);
*variablenode_ns_1_i_723_variant_DataContents = UA_STRING_ALLOC("1.05.02");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_723_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 723LU),
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_1_i_723_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_292_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 723LU)
);
}

/* NamespaceUri - ns=1;i=722 */

static UA_StatusCode function_gds_nodeset_293_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_722_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_722_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_722_variant_DataContents);
*variablenode_ns_1_i_722_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/GDS/");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_722_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 722LU),
UA_NODEID_NUMERIC(ns[1], 721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
UA_String_delete(variablenode_ns_1_i_722_variant_DataContents);
return retVal;
}

static UA_StatusCode function_gds_nodeset_293_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 722LU)
);
}

UA_StatusCode gds_nodeset(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/GDS/");

/* Load custom datatype definitions into the server */
if((retVal = function_gds_nodeset_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_10_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_11_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_12_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_13_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_14_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_15_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_16_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_17_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_18_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_19_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_20_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_21_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_22_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_23_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_24_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_25_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_26_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_27_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_28_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_29_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_30_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_31_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_32_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_33_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_34_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_35_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_36_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_37_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_38_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_39_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_40_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_41_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_42_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_43_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_44_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_45_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_46_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_47_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_48_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_49_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_50_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_51_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_52_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_53_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_54_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_55_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_56_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_57_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_58_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_59_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_60_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_61_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_62_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_63_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_64_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_65_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_66_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_67_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_68_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_69_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_70_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_71_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_72_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_73_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_74_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_75_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_76_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_77_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_78_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_79_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_80_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_81_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_82_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_83_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_84_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_85_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_86_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_87_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_88_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_89_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_90_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_91_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_92_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_93_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_94_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_95_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_96_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_97_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_98_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_99_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_100_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_101_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_102_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_103_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_104_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_105_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_106_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_107_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_108_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_109_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_110_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_111_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_112_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_113_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_114_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_115_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_116_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_117_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_118_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_119_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_120_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_121_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_122_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_123_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_124_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_125_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_126_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_127_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_128_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_129_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_130_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_131_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_132_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_133_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_134_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_135_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_136_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_137_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_138_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_139_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_140_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_141_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_142_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_143_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_144_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_145_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_146_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_147_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_148_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_149_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_150_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_151_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_152_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_153_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_154_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_155_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_156_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_157_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_158_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_159_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_160_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_161_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_162_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_163_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_164_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_165_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_166_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_167_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_168_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_169_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_170_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_171_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_172_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_173_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_174_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_175_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_176_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_177_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_178_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_179_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_180_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_181_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_182_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_183_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_184_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_185_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_186_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_187_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_188_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_189_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_190_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_191_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_192_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_193_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_194_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_195_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_196_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_197_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_198_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_199_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_200_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_201_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_202_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_203_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_204_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_205_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_206_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_207_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_208_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_209_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_210_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_211_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_212_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_213_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_214_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_215_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_216_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_217_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_218_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_219_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_220_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_221_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_222_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_223_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_224_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_225_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_226_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_227_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_228_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_229_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_230_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_231_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_232_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_233_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_234_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_235_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_236_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_237_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_238_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_239_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_240_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_241_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_242_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_243_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_244_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_245_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_246_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_247_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_248_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_249_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_250_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_251_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_252_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_253_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_254_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_255_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_256_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_257_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_258_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_259_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_260_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_261_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_262_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_263_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_264_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_265_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_266_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_267_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_268_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_269_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_270_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_271_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_272_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_273_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_274_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_275_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_276_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_277_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_278_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_279_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_280_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_281_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_282_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_283_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_284_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_285_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_286_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_287_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_288_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_289_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_290_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_291_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_292_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_293_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_293_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_292_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_291_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_290_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_289_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_288_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_287_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_286_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_285_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_284_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_283_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_282_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_281_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_280_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_279_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_278_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_277_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_276_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_275_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_274_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_273_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_272_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_271_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_270_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_269_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_268_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_267_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_266_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_265_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_264_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_263_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_262_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_261_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_260_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_259_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_258_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_257_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_256_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_255_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_254_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_253_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_252_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_251_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_250_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_249_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_248_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_247_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_246_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_245_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_244_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_243_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_242_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_241_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_240_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_239_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_238_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_237_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_236_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_235_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_234_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_233_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_232_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_231_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_230_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_229_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_228_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_227_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_226_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_225_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_224_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_223_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_222_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_221_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_220_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_219_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_218_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_217_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_216_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_215_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_214_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_213_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_212_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_211_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_210_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_209_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_208_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_207_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_206_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_205_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_204_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_203_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_202_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_201_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_200_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_199_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_198_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_197_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_196_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_195_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_194_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_193_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_192_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_191_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_190_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_189_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_188_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_187_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_186_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_185_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_184_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_183_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_182_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_181_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_180_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_179_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_178_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_177_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_176_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_175_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_174_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_173_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_172_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_171_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_170_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_169_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_168_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_167_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_166_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_165_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_164_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_163_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_162_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_161_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_160_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_159_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_158_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_157_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_156_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_155_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_154_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_153_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_152_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_151_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_150_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_149_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_148_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_147_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_146_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_145_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_144_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_143_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_142_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_141_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_140_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_139_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_138_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_137_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_136_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_135_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_134_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_133_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_132_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_131_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_130_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_129_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_128_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_127_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_126_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_125_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_124_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_123_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_122_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_121_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_120_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_119_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_118_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_117_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_116_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_115_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_114_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_113_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_112_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_111_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_110_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_109_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_108_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_107_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_106_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_105_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_104_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_103_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_102_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_101_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_100_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_99_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_98_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_97_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_96_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_95_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_94_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_93_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_92_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_91_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_90_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_89_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_88_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_87_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_86_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_85_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_84_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_83_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_82_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_81_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_80_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_79_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_78_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_77_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_76_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_75_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_74_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_73_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_72_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_71_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_70_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_69_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_68_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_67_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_66_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_65_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_64_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_63_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_62_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_61_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_60_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_59_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_58_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_57_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_56_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_55_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_54_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_53_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_52_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_51_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_50_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_49_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_48_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_47_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_46_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_45_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_44_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_43_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_42_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_41_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_40_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_39_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_38_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_37_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_36_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_35_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_34_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_33_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_32_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_31_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_30_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_29_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_28_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_27_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_26_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_25_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_24_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_23_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_22_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_21_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_20_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_19_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_18_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_17_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_16_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_15_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_14_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_13_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_12_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_11_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_10_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_gds_nodeset_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}
