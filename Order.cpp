#include "Order.h"
#include <iostream>

void Order::addProduct(const Product& product) {
    products.push_back(product);
}

void Order::displayOrder() const {
    for (const auto& product : products) {
        std::cout << "Ordered Product: " << product.getName() << ", Price: " << product.getPrice() << std::endl;
    }
}
