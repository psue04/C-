#include <iostream>

using namespace std;

//Define
#define NUM 50

int main()

{
    int array[NUM];
    
    //Variables
    int i, max, min, size;
    
    // User input
    cin>>size;
    
    // Input array elements
    for(i=0; i<size; i++)
        cin>>array[i];
        
    // Assume
    max = array[0];
    min = array[0];
    
    //Find max and min
    for(i=1; i<size; i++)
    {
    // If statements
        if(array[i] > max)
            max = array[i];

        if(array[i] < min)
            min = array[i];
    }
    // Print
    cout<<"\nTarget value =" << max << "\n";
    cout<<"Target count =" << min;
    return 0;

}
