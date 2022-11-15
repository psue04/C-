#include <iostream>

using namespace std;

//Define
#define NUM 50

//Variables
int array[NUM];
int i, max, min, len;
int b;

void getMinMax(int* arr, int len, int& min, int& max) {
    // User input
    cin>>len;
    
    // Input array elements
    for(i=0; i<len; i++)
        cin>>array[i];
        
    // Assume
    max = array[0];
    min = array[0];
    
    //Find max and min
    for(i=1; i<len; i++)
    {
    // If statements
        if(array[i] > max)
            max = array[i];

        if(array[i] < min)
            min = array[i];
    }
    
    cout<<"min: " << min << "\n";
    cout<<"max: " << max;
}

int main()

{
    //Memory allocation
    int* arr = new int[b];
    
    // Print
    getMinMax(arr, len, min, max);
    
    //Memory deallocation
    delete [] arr;
    
    return 0;

}
