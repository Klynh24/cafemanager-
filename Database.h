#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>
#include <string>

class Database {
public:
    Database(const std::string& dbName);
    ~Database();
    
    void insertEmployee(const std::string& name, const std::string& position);
    void insertProduct(const std::string& name, double price);
    // Thêm các phương thức khác như tìm kiếm, xóa

private:
    sqlite3* db;
};

#endif // DATABASE_H
