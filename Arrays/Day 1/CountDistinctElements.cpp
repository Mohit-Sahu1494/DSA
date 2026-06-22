
// =============================================================================
//    Count Distinct Element problem 
// =============================================================================

#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
 int arr[] = {1,2,2,3,1,4,5,5};   
 unordered_map<int,int>mp;
 
 for(int i=0;i<8;i++){
    mp[arr[i]]++;
 }
 cout<<"Totoal Element - "<<mp.size();

}