cmake_minimum_required(VERSION 3.16)
project(opcua_gds_server CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 99)

find_package(open62541 REQUIRED)

add_executable(gds_server 
    gds_server.cpp 
    gds_nodeset.c
)

target_include_directories(gds_server PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(gds_server PRIVATE open62541::open62541)