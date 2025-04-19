#include <iostream>
#include <string>
#include <vector>

#include "Menu.h"

Menu::Menu() : menuOptions({ // Constructor
    "[1] Find the frequency of an product",
    "[2] Print all products and their frequencies",
    "[3] View a histogram of all product frequencies",
    "[4] Exit"
}) {}

void Menu::displayMenu() const { // Function to display menu
    for (const std::string& option : menuOptions) { // Print each menu option from list, on a new line
        std::cout << option << std::endl;
    }
}