#include "Database.h"
#include <iostream>

Database::Database(const std::string& dbName) {
    if (sqlite3_open(dbName.c_str(), &db) != SQLITE_OK) {
        std::cerr << "Cannot open database: " << sqlite3_errmsg(db) << std::endl;
    }
}

Database::~Database() {
    sqlite3_close(db);
}

void Database::insertEmployee(const std::string& name, const std::string& position) {
    std::string sql = "INSERT INTO Employees (Name, Position) VALUES ('" + name + "', '" + position + "');";
    char* errorMessage;
    if (sqlite3_exec(db, sql.c_str(), 0, 0, &errorMessage) != SQLITE_OK) {
        std::cerr << "Error inserting employee: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }
}

void Database::insertProduct(const std::string& name, double price) {
    std::string sql = "INSERT INTO Products (Name, Price) VALUES ('" + name + "', " + std::to_string(price) + ");";
    char* errorMessage;
    if (sqlite3_exec(db, sql.c_str(), 0, 0, &errorMessage) != SQLITE_OK) {
        std::cerr << "Error inserting product: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }
}
