#include "minimal_fighter.h"

#include <iostream>
#include <sstream>

std::string Log(const MinimalFighter& fighter) {
    if (fighter.status() == FighterStatus::Alive) {
        std::stringstream stream;
        stream << 'H' << fighter.hp() << ", P" << fighter.power();
        
        return stream.str();
    }
    else {
        return "DEAD";
    }
}

//Variables
int hp1;
int hp2;
int power1;
int power2;
char action;

int main() {
    while (1) {
        std::string input;
        std::getline(std::cin, input);

        std::stringstream stream;
        stream << input;
        stream >> hp1 >> power1 >> action >> hp2 >> power2;

        if (stream.fail()) {
            break;
        }
        
        std::string dummy;
        stream >> dummy;
        
        if (!dummy.empty()
            || hp1 < 0 || power1 < 0
            || hp2 < 0 || power2 < 0)
        {
            break;
        }

        //Attack choices
        MinimalFighter fighter1(hp1, power1); //Call
        MinimalFighter fighter2(hp2, power2); //Call

        switch (action) {
        case 'H':
            fighter1.hit(&fighter2);
            break;
        case 'A':
            fighter1.attack(&fighter2);
            break;
        case 'F':
            fighter1.fight(&fighter2);
            break;
        default:
            return 0;
        }

        //Print
        std::cout << Log(fighter1) << " / " << Log(fighter2) << std::endl;
    }
}
