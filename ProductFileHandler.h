#ifndef PRODUCTFILEHANDLER_H
#define PRODUCTFILEHANDLER_H

#include <iostream>
#include <string>

class ProductFileHandler {
private:
    std::string fileName; // variable for file name

public:
    ProductFileHandler(); // Constructor

    void readFile(std::string fileName); // Function to read file

    void writeFile(); // Function to write file
};

#endif