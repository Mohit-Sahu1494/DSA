
// =============================================================================
//    find the first repeeting element
// =============================================================================

#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    int arr[]={1,1,3,3,5,6};
    unordered_map<int,int>mp;

    int freqCount=0;
    int element=0;

    for(int i=0;i<6;i++){
        mp[arr[i]]++;
    }
     
    for(int i=0;i<6;i++){
     if(mp[arr[i]]>1){
        cout<<"first repeeting element :- "<<arr[i]<<endl;
        break;
     }
    }

}