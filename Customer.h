#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
public:
    Customer(const std::string& name);
    std::string getName() const;

private:
    std::string name;
};

#endif // CUSTOMER_H
