// main.cpp
// Created by Chase Gibbs on 3/28/2024.
//

#include <iostream>

int main() {
    int choice = 0;


    j: //goto label
    std::cout << "Welcome to XIVStatCalculator!\n\n------------------- What would you like to do? -------------------\n1. Calculate Some Stats!";
    std::cout << "\n2. Add a new character!\n3. View Characters!\n4. Exit the Program!\n\nENTER CHOICE HERE: ";
    std::cin >> choice; //going to need to cin.ignore() this later

    switch(choice) {
        case 1:
            std::cout << "You chose option 1!";
        case 2:
            std::cout << "You chose option 2!";
        case 3:
            std::cout << "You chose option 3!";
        case 4:
            std::cout << "Goodbye!";
            return 0;
        default:
            std::cout << "That's not an option!";
            goto j; //corresponds to right above the introductory strings
            //todo! write a boolean..do not leave this as a goto statement....
    }
}
