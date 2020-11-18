cmake_minimum_required(VERSION 3.17)
project(PSQL_Client)

set(CMAKE_CXX_STANDARD 14)

add_executable(PSQL_Client main.cpp db_operations.h db_operations.cpp psql_getters.cpp psql_getters.h submenu.cpp submenu.h)

find_package(PostgreSQL REQUIRED)

target_link_libraries(PSQL_Client PRIVATE PostgreSQL::PostgreSQL)
