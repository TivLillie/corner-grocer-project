#include <iostream>
#include <string>
#include <vector>

#include "Menu.h"

Menu::Menu() : menuOptions(menuOptions) { // Constructor
}

void Menu::displayMenu() const { // Function to display menu
    for (const std::string& option : menuOptions) { // Print each menu option from list, on a new line
        std::cout << option << std::endl;
    }
}