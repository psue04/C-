#include "number.h"
#include <iostream>

int main() {
    while (true) {
        std::string given;
        std::cin >> given;

        if (given == "quit") {
            break;
        }

        int num = 0;
        std::cin >> num;

        Number* number = nullptr;
        if (given == "earth") {
            number = new Number;
        }
        else if (given == "moon") {
            number = new Square;
        }

        number->SetNumber(num);
        std::cout << number->GetString();

        delete number;
    }

    return 0;
}