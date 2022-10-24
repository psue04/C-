#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string type;
    cout << "Sentence: ";
    
    getline (cin, type); //get user input
    cout<< type << endl;

    return 0;
}