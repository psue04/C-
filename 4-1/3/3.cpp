#include <iostream>

using namespace std;

//Swap
void swapInt (int& n1, int& n2) {
    int num = n2;
    n2 = n1;
    n1 = num;
    
}

void swapString(string& s1, string&s2) {
    string word = s2;
    s2 = s1;
    s1 = word;
}

int main()
{
    //Variables
    int n1, n2;
    string s1;
    string s2;
    
    //User input
    cin >> n1 >> n2 >> s1 >> s2;
    
    //Print 
    cout << "n1:" << n1 << ", n2:" << n2 << ", s1:" << s1 << ", s2:" << s2 << endl;
    
    //Call swap functions
    swapInt(n1, n2);
    swapString(s1, s2);
    
    //Print result
    cout << "n1:" << n1 << ", n2:" << n2 << ", s1:" << s1 << ", s2:" << s2 << endl;
    return 0;
}
