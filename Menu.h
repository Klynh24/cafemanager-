#ifndef MENU_H
#define MENU_H

#include <vector>
#include "Product.h"

class Menu {
public:
    void addProduct(const Product& product);
    void displayMenu() const;

private:
    std::vector<Product> products;
};

#endif // MENU_H
