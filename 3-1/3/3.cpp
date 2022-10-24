#include <iostream>
#include <string>

using namespace std;

// A.i
int add(int a, int b) {
    return a + b;
}

// A.ii
std::string add(std::string x, std::string y) {
    return x + "-" + y;
}

// A.iii
float add (float g) {
    return g + 0.9;
}

int main()
{
    //Variables
    int num, num2;
    string word, word2;
    float flt;
    
    //Get User input
    cin >> num >> num2 >> word >> word2 >> flt;
    
    //Print results
    cout << add(num, num2) << endl;
    cout << add (word, word2) << endl;
    cout << add(flt) << endl;

    return 0;
}