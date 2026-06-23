
// ===========================================================================================
//   contain duplicate element of an array 
// ===========================================================================================

#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=8;
     
    unordered_set<int> res;

    for(int i=0;i<n;i++){
        if(res.count(arr[i])){
            cout<<"Duplecate element "<<endl;
            return 0;
        }
        res.insert(arr[i]);
    }
      
    cout<<"No Duplicate element found ";
}