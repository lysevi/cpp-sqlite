#include "libsqlite3/sqlite3.h"
#include <iostream>

int main(int , char **) {
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;

    rc = sqlite3_open("test.db", &db);

    if (rc) {
        std::cerr<< "Can't open database: "<< sqlite3_errmsg(db);
        return (0);
    } else {
        std::cerr<<  "Opened database successfully\n";
    }
    sqlite3_close(db);
    return 0;
}
