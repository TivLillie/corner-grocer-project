#include <iostream>
#include <string>

#include "Product.h"

Product::Product(std::string name) : name(name) {}; // Product must have a name to be created

void Product::setName(std::string productName) { // Function to set product name
    std::string name = productName;
}

std::string Product::getName() { // Function to get product name
    return name;
}