#include "setfunc.h"
#include <iostream>
#include <map>
#include <sstream>

using SetOper = std::set<int>(*)(const std::set<int>&, const std::set<int>&);

//Make function to print visuals
void log_set(const std::set<int>& int_set) {
    std::cout << "{ ";
    for (int i : int_set) {
        std::cout << i << ' ';
    }
    std::cout << '}' << std::endl;
}

int main() {
    const std::map<char, SetOper> opers = {
        //Differenciate
        { '+', GetUnion },
        { '*', GetIntersection },
        { '-', GetDifference },
    };

    while (1) {
        std::string given;
        std::getline(std::cin, given);

        if (given == "0") {
            break;
        }

        std::stringstream sstream(given);
        
        std::set<int> set1; 
        if (!printSet(set1)) {
            continue;
        }

        char oper = '\0';
        sstream >> oper;

        std::set<int> set2;
        if (!printSet(set2)) {
            continue;
        }
      
        auto iter = opers.find(oper);
        if (iter != opers.end()) {
            std::set<int> result = std::get<1>(*iter)(set1, set2);
            log_set(result);
        }
    }

    return 0;
}