//
// Created by User on 08/03/2024.
//

#include "main.h"
#include <iostream> //this allows input and output streams

int main() { // The Cinnamonroll Experience

    // NO God did not abandon me. I abdandoned HER OKAY   IT WAS SOMEWHAT MUTUAL THOUGH.
/*
    std::string userInput;

    std::cout << "Hewwo! Wewcome tuwu cinnamonwoww expewience " << std::endl;
    std::cout << "We onwy speak in uwu, get used tuwu iwt" << std::endl;
    // I already want to kill myself even more doing this :3
    std::cin >> Love;
    std::cout << "Uwu onwy said:" << Love;
*/

std::string userInput;

    std::cout << "Hewwo! Wewcome tuwu cinnamonwoww expewience" << std::endl;
    std::cout << "We onwy speak in uwu, get used tuwu iwt" << std::endl;
    while (true) {
        // Prompt user for input
        std::cout << "Enter a string (or type 'let me exit this hell' to escape): ";
        std::getline(std::cin, userInput);

        // Check if the user wants to exit
        if (userInput == "let me exit this hell") {
            std::cout << "oh wno yyouw goiwng awweadyy :< :( come back! " << std::endl;
            break;
        }

        // Replace 'A' or 'a' with 'S'
        for (char &c : userInput) {
            if (c == 'l' || c == 'r')  {
                c = 'w';
            }
            if (c == 'L' || c == 'R') {
                c = 'W';
            }
        }

        // Output the modified string
        std::cout << "Modified string: " << userInput << std::endl;
    }

}
