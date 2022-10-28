#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    //Variables
	int n;
	
	//User input
	cin >> n; 

    //Memory allocation
	int* array = new int[n]; 
	
    for(int i = 0; i < n; i++){ //For loop statements
        array[i] = i;
    }
    
	for (int i = 0; i < n; i++){ 
		cout << *(array + i) << " ";
	}

    //Memory deallocation 
	delete [] array; 
	
	return 0;
}