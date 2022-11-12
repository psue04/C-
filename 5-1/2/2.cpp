#include <iostream>

using namespace std;

//Define
#define NUM 50

//Struct 
typedef struct {
    string name[100];
    double score[100];
} Person;

int main(int argc, char** argv)
{
    //Variables / Arrays
    int i, j;
    int n;
    int array[NUM];
    string name;
    double score;
    
    Person persons[3];
    
    //Take user input
    for (i = 0; i < 3; i++) {
        cin >> persons[i].name[i] >> persons[i].score[i] >> persons[i].name[i] >> persons[i].score[i] >> persons[i].name[i] >> persons[i].score[i];
    }
    
    //Memory Allocation
   int **NUM = new int*[n];
    
    //Print result
    for (i = 0; i < 3; i++) {
        cout << "Name:" << persons[i].name[i] << ", Score:" << persons[i].score[i] << "\n";
    }
   
   //Memory deallocation
   delete [] NUM;

    return 0;
}