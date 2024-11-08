#include "Employee.h"

Employee::Employee(const std::string& name, const std::string& position) 
    : name(name), position(position) {}

std::string Employee::getName() const {
    return name;
}

std::string Employee::getPosition() const {
    return position;
}
