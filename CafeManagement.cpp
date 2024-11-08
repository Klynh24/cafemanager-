#include "CafeManagement.h"
#include <iostream>

CafeManagement::CafeManagement() : db("cafe_management.db") {
    // Khởi tạo cơ sở dữ liệu, có thể tạo bảng ở đây
}

void CafeManagement::addEmployee(const std::string& name, const std::string& position) {
    Employee employee(name, position);
    employees.push_back(employee);
    db.insertEmployee(name, position);
}

void CafeManagement::addProduct(const std::string& name, double price) {
    Product product(name, price);
    menu.addProduct(product);
    db.insertProduct(name, price);
}

void CafeManagement::createOrder() {
    Order order;
    // Logic để thêm sản phẩm vào order
    std::cout << "Creating order...\n"; // Chưa cài đặt
}

void CafeManagement::displayEmployees() {
    for (const auto& employee : employees) {
        std::cout << "Employee: " << employee.getName() << ", Position: " << employee.getPosition() << std::endl;
    }
}

void CafeManagement::displayMenu() {
    menu.displayMenu();
}
