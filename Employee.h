#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee(const std::string& name, const std::string& position);
    std::string getName() const;
    std::string getPosition() const;

private:
    std::string name;
    std::string position;
};

#endif // EMPLOYEE_H
