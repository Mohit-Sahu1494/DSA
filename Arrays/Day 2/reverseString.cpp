// ====================================================================================
//  reverse of a string
// ====================================================================================


#include<iostream>
#include<string>

using namespace std;
int main(){
  string text="Hello";
  int left=0;
  int right=text.length()-1;


 while (left<right)
 {
   char temp=text[left];
   text[left]=text[right];
   text[right]=temp;
   left++;
   right--;
 }
 cout<<"Reverse string :- "<<text<<endl;
 
}