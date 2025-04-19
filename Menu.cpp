#include <iostream>
#include <string>
#include <vector>
#include <limits>

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

int Menu::getUserInput(int userInput) { // function to get user input

    std::cout << "Enter menu option: "; // Prompt for user input
    std::cin >> userInput; // Get user input

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer

    std::cout << std::endl; // Space for readability

    void processUserInput(int userInput) { // Function to process user input
        switch (userInput) { 
            case 1: // Find frequency of product
                // TODO: implement function
                break;
            case 2: // Print all products and frequencies
                //TODO: implement function
                break;
            case 3: // View histogram of all product frequencies
                //TODO: implement function
                break;
            case 4: // Exit
                std::cout << "Exiting program..." << std::endl;
                exit(0); // Exit program
            default: // If invalid input
                std::cout >> "Please enter a valid menu option (1-4)" << std::endl; // Prompt for valid input
                break;
        }
    }

}