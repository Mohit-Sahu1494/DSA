// ====================================================================================
//  check given stringn polindrome or not 
// ====================================================================================


#include<iostream>
#include<string>

using namespace std;
int main(){
  string text="A man, a plan, a canal: Panama";
  int left=0;
  int right=text.length()-1;
  bool ispal=true;

 while (left<right)
 {
   if(!isalnum(text[left])){
     left++;
     continue;
   }
   if(!isalnum(text[right])){
     right--;
     continue;
   }
   if(tolower(text[left])!=tolower(text[right])){
        ispal=false;
        break;
   }
   left++;
   right--;
 }
 cout<<"Given palindrome :- "<<ispal<<endl;
 
}