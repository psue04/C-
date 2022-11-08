#include <iostream>

using namespace std;

//Gobal Variables
int i, k;
int b;

//Declare Function
void Magic(int **a,int b);
void Make(int **a, int b);

void Make(int **a, int b)
{
   for ( int i = 0; i < b; i++ )      
   {
      a[i] = new int[b];
   }
}

void Magic(int **a, int b)
{
   //Set location to 0
   int num = 1;
   int i = 0;
   int k = b / 2;

   //For Loop: square && increase num 
   for ( num; num <= b*b; num++ )
   {
      a[i][k] = num;
      if ( num % b == 0 )      
      {
         i++;
      }
      else if ( i == 0 )         
      {
         i = b - 1;
         k++;
      }
      else if ( k == b - 1 )      
      {
         i--;
         k = 0;
      }
      else                  
      {
         i--;
         k++;
      }

   }

   for ( i = 0; i < b ; i++ )
   {
      for ( k = 0; k < b; k++ )
      {
         cout << a[i][k] << " ";  //Remember to space!
         if ( k == b - 1 )
         {
            cout << endl;
         }
      }
   }
}

int main()
{
   //User Input
   cin >> b;
   
   //Memory Allocation
   int **a = new int*[b];
   
   //Call Functions
   Make(a, b);
   Magic(a, b);
   
   //Memory deallocation
   delete [] a;
}