#include "sorted.h"
#include <iostream>
#include <sstream>

int main() {
    std::string choices;
    SortedArray sorted_array;

    while (1) {
        //User input
        std::cin >> choices;
        
        //If else statements
        if (choices == "ascend") {
            for (int i : sorted_array.GetSortedAscending()) {
                std::cout << i << ' ';
            }
            std::cout << std::endl;
        }
        else if (choices == "descend") {
            for (int i : sorted_array.GetSortedDescending()) {
                std::cout << i << ' ';
            }
            std::cout << std::endl;
        }
        else if (choices == "max") {
            std::cout << sorted_array.GetMax() << std::endl;
        }
        else if (choices == "min") {
            std::cout << sorted_array.GetMin() << std::endl;
        }
        else if (choices == "quit") {
            break; //break code
        }
        else {
            std::stringstream sstream(choices);
            
            int num = 0;
            sstream >> num;
            sorted_array.AddNumber(num);
        }
    }
    return 0;
}