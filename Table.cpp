#include "Table.h"

Table::Table(int number) : number(number) {}

std::string Table::getTableInfo() const {
    return "Table Number: " + std::to_string(number);
}
