#include "charlist.h"

CharList::~CharList() {
   mystring_.clear();
}

CharList::CharList(const char* str){
   string cl(str);
   //for loop
   for(int i = 0; i < cl.size(); i++) {
      mystring_.push_back(cl[i]);
   }
};

bool CharList::CheckPalindrome() {
   int len = mystring_.size();
   
   //for loop
   for(int i = 0; i < len/2; i++) {
      char a = mystring_.front();
      char b = mystring_.back();
      
      if(a != b) return false;
      mystring_.pop_back();
      mystring_.pop_front();
   }
   return true;
}

list<char> CharList::GetAll() {

}