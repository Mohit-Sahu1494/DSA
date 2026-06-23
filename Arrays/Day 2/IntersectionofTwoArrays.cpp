


// ===========================================================================================
//   interSection of two array 
// ===========================================================================================


#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,4};
    int arr2[]={1,6,7,4};
    unordered_set<int> res;

    for(int i=0;i<6;i++){
        res.insert(arr[i]);
    }
    for(int i=0;i<4;i++){
        res.insert(arr2[i]);
    }
    for( auto el : res){
        cout<<el<<" ";
    }
}