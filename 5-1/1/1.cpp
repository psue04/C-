#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //Variables
    int n = atoi(argv[2]);
    
    cout << "Enter a word and a number\n";
    cout << "\n";
    
    //For loop
    for (int i= 0; i < n; i++) {
        //Print result
        cout << argv[1] << "\n";
    }

    return 0;
}
