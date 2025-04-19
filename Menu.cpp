#include <iostream>
#include <string>
#include <vector>

#include "Menu.h"

Menu::Menu(const std::vector<std::string>& menuOptions) : menuOptions(menuOptions) { // Constructor
}

void Menu::displayMenu() const { // Function to display menu
    for (const std::string& option : menuOptions) { // Print each menu option from list, on a new line
        std::cout << option << std::endl;
    }
}