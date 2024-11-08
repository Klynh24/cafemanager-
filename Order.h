#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "Product.h"

class Order {
public:
    void addProduct(const Product& product);
    void displayOrder() const;

private:
    std::vector<Product> products;
};

#endif // ORDER_H
