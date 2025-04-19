#include <iostream>
#include <string>
#include <fstream>


#include "ProductFileHandler.h"

ProductFileHandler::ProductFileHandler() : fileName("TestGroceryList.csv") { } // User does not give filename


void readFile(std::string fileName) { // Function to read file
    std::string line = ""; // variable to hold line
    std::ifstream reader; // create file reader
    
    reader.open("TestGroceryList.csv"); // open file
    getline(reader, line); // read in line
    std::cout << line << std::endl; // Print line
}

void writeFile() { // Function to write file
    // TODO: Define this fucntion
}

