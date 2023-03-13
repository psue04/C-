#include <iostream>
#include <list>
#include <string>
#include "charlist.h"

using namespace std;

int main() {

   while(1) {
      string user;
      cin >> user;

      const char* c = user.c_str();

      if(user == "quit") {
          break;
      }

      CharList *CL = new CharList(c);

      bool check = CL->CheckPalindrome();
      
      cout << boolalpha << check << endl;
   }


   return 0;
}
