#ifndef TABLE_H
#define TABLE_H

#include <string>

class Table {
public:
    Table(int number);
    std::string getTableInfo() const;

private:
    int number;
};

#endif // TABLE_H
