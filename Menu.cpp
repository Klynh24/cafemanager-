#include "Menu.h"
#include <iostream>

void Menu::addProduct(const Product& product) {
    products.push_back(product);
}

void Menu::displayMenu() const {
    for (const auto& product : products) {
        std::cout << "Product: " << product.getName() << ", Price: " << product.getPrice() << std::endl;
    }
}
