
// =============================================================================
//    print the all unique numbers
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
     
    for(auto it:mp){
        if(it.second<=1){
            cout<<"Unique Number :-"<<it.first<<endl;
        }
    }

}