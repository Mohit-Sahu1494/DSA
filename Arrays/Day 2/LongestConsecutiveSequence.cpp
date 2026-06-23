// ======================================================================================================
//     Longest Consecutive Sequence
// ======================================================================================================

#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[]={100,4,200,1,3};
    unordered_set<int>res;

    for(int i=0;i<6;i++){
        res.insert(arr[i]);
    }
    int longest=0;
    

    for (auto x :res){
        if(!res.count(x-1)){
          int current=x;
          int length=1;
            while (res.count(current+1)) {
                 current++;
                 length++;
            }
              longest=max(longest,length);
        }
      
    }
    cout<<"Longest sequence :- "<<longest<<endl;
}