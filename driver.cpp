#include <iostream>
#include <string>
#include <vector>

#include "Menu.h"
#include "ProductInventory.h"
#include "ProductFileHandler.h"
#include "Product.h"


int main () {
    Menu menu; // Create a menu
    ProductInventory inventory; // Create an inventory
    ProductFileHandler fileHandler; // create a file handler
    std::string fileName = "TestGroceryList.csv"; // File to read from

    // Set file name
    fileHandler.setFileName(fileName);
    

    menu.displayMenu(); // Display menu

    std::cout << "Attempting to read file..." << std::endl;

    // Read in file
    fileHandler.readFile(fileName, inventory);
    
    // Test, output the inventory map
    inventory.printAllFrequency();
    



    return 0;
}


