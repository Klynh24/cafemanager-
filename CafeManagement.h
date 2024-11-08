#ifndef CAFEMANAGEMENT_H
#define CAFEMANAGEMENT_H

#include "Database.h"
#include "Employee.h"
#include "Product.h"
#include "Menu.h"
#include "Order.h"
#include "Table.h"
#include "Customer.h"

class CafeManagement {
public:
    CafeManagement();
    void addEmployee(const std::string& name, const std::string& position);
    void addProduct(const std::string& name, double price);
    void createOrder();
    void displayEmployees();
    void displayMenu();

private:
    Database db;
    Menu menu;
    std::vector<Employee> employees;
    std::vector<Order> orders;
};

#endif // CAFEMANAGEMENT_H
