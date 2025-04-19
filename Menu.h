#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <vector>

class Menu{
private:
    std::vector<std::string> menuOptions; // Vector of menu options

public:
    Menu(); // Constructor

    void displayMenu() const; // Function to display menu

    int getUserInput();
};
#endif 