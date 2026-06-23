// ===========================================================================================
//   count the unique number of and array 
// ===========================================================================================


#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,4};
    unordered_set<int> res;

    for(int i=0;i<6;i++){
        res.insert(arr[i]);
    }
   cout<<" Totoal Unique number :- "<<res.size();
}