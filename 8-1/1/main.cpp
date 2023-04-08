#include "number.h"
#include <iostream>

int main() {
    //while loop to get input
    while (true) {
        std::string input;
        std::cin >> input;

        if (input == "quit") { //break when input receives "quit"
            break;
        }

        //Variables
        int num = 0;
        
        //Get User Input
        std::cin >> num;

        Number* number = nullptr;
        
        //If Statements
        if (input == "number") {
            number = new Number;
        }
        else if (input == "square") {
            number = new Square;
        }
        else if (input == "cube") {
            number = new Cube;
        }

        //Set number to SetNumber
        number->setNumber(num); 
        
        //Print Results
        std::cout << Number->getString();

        delete number; //Delete
    }

    return 0;
}