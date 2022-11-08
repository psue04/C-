#include<iostream>
using namespace std;

void firstSquare( int n )
{
	int arr[n][n];
	int i, j;

	//Filling matrix with its count value starting from 1
	for ( i = 0; i < n; i++)
		for ( j = 0; j < n; j++)
			arr[i][j] = (n*i) + j + 1;

	//Printing the first magic-square
	for (i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << "\n";
	}
}

void secondSquare( int n )
{
    //Variables
	int arr[n][n];
	int i, j;

	//Start from 64
	int sub=0;
	for(i = 0; i < n; i++) {
		for(int j=0; j < n; j++) {
			arr[i][j] = n * n - sub;
			sub+=1;
		}
    }
    
    //Top left corner
	for ( i = 0; i < n/4; i++) {
		for ( j = 0; j < n/4; j++) {
			arr[i][j] = (n*n + 1) - arr[i][j];
		}
	}
			
	//Top right corner
	for ( i = 0; i < n/4; i++) {
		for ( j = 3 * (n/4); j < n; j++) {
			arr[i][j] = (n*n + 1) - arr[i][j];
		}
	}
	
	//Middle
	for ( i = n/4; i < 3 * n/4; i++)
		for ( j = n/4; j < 3 * n/4; j++)
			arr[i][j] = (n*n + 1) - arr[i][j];
			
	//Bottom left corner
	for ( i = 3 * n/4; i < n; i++) {
		for ( j = 0; j < n/4; j++) {
			arr[i][j] = (n*n+1) - arr[i][j];
		}
	}
			
	//Bottom right corner
	for ( i = 3 * n/4; i < n; i++) {
		for ( j = 3 * n/4; j < n; j++) {
			arr[i][j] = (n*n + 1) - arr[i][j];
		}
	}

	//Printing square
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

int main()
{
    //Variables
    int n;
    
    //Welcome user
    cout << "Please enter a number: ";
    
    //Take user input
    cin >> n;
    cout << "\n";

    //****Ignore code: Just testing****//
	//cout << "First\n";
	//firstSquare(n);
	//cout << " \n";
	//cout << "Second\n";
	
	//Declare magicsquare function
	secondSquare(n);
	return 0;
}
