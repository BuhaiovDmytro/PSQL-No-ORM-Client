//
// Created by dmytro on 13.10.20.
//

#ifndef PSQL_CLIENT_PSQL_GETTERS_H
#define PSQL_CLIENT_PSQL_GETTERS_H

#include <libpq-fe.h>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

PGconn* psql_init(const std::string& password, const std::string& user = "postgres", const std::string& host = "127.0.0.1",
                  const std::string& dbname = "postgres");
void exit_nicely(PGconn *conn);
std::vector<std::string> get_tab_names(PGconn *conn);
std::vector<std::string> get_col_names(PGconn *conn, const std::string& table);
std::vector<std::string> get_col_types(PGconn *conn, const std::string& table);
std::string get_col_type(PGconn *conn, const std::string& col_name);
bool are_cols_in_tab(PGconn *conn, std::vector<std::string> cols, const std::string& tab);
void PG_error_handler(PGconn *conn, PGresult *res, const std::string& tab_name = "");

#endif //PSQL_CLIENT_PSQL_GETTERS_H
