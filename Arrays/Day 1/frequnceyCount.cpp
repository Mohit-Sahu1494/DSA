
// ==================================================================================
//  find maximun number of freqency of array 
// ==================================================================================

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr [] = {1,2,1,3,1,2};
    unordered_map<int,int>mp;
   int freqCount=0;
   int element=-1;

      
// ====================================================================================
//   brute froce ka use karke max frequncy
// ====================================================================================

   
   for(int i=0;i<6;i++){
    int count=0;
    for (int j = 0; j <6; j++){
          if(arr[i]==arr[j]){
             count++;
          }
    }
    if(freqCount<count){
         freqCount=count;
         element=arr[i];
    }
    
   }
   
// ====================================================================================
//   hashmap ka use kare unordered_map ka use kare 
// ====================================================================================



  for(int i=0;i<6;i++){
      mp[arr[i]]++; 
   }

   for(auto el :mp){
    if(el.second>freqCount){
        freqCount=el.first;
        element=el.second;
    }
      cout<<"Key :-"<<el.first;
      cout<<"value :- "<<el.second<<endl;
   }

   cout<<"Total Freq :- "<<freqCount<<endl;
   cout<<"Element :- "<<element<<endl;
}
