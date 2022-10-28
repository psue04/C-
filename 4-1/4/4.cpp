#include <iostream>

using namespace std;

//Variables
int a, b;
int sum;
int diff;

//Calculations
void getSumDiff(int a,int b, int& sum, int& diff) {
    sum = a + b;
    diff = a - b;
}

int main(void)
{
//More Variables
int getAdd, getSub;
    
//User input
    cin >> a >> b;
    
//Call function
    getSumDiff(a, b, getAdd, getSub);
    
//Print results
    cout << "sum:" << getAdd << endl;
    cout << "diff:" << getSub << endl;

    return 0;
}