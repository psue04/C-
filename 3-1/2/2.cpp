#include <iostream>
#include <string>

using namespace std;

int main()
{
    //variables
    std::string input;
    std::string input2;
    string total;
    
    cout << "Letters: ";
    //get user input
    getline (cin, input); 
    getline (cin, input2);
    
    //Letter Concentation
    total = input + input2;
    cout << total << endl;
    
    //Print first and last Letter
    cout << total[0] << endl;
    cout << total[total.length() - 1] << endl;

    return 0;
}