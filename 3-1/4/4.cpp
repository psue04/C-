#include <iostream>
#include <string>

using namespace std;

namespace first_space {
    void print() {
        cout << "Print from first space" << endl;
    }
}

namespace second_space {
    void print() {
        cout << "Print from second space" <<endl;
    }
}

int main() {
    //Variables
    int num;
    
    //User input
    cin >> num;
    
    //If statement
    if (num == 1) {
        using namespace first_space;
        print();
    } else {
        using namespace second_space;
        print();    
    }
    
    return 0;
}