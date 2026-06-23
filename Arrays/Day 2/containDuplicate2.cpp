// ========================================================================================
//    contain duplicate II
// ========================================================================================


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[]={1,0,2,1};
   unordered_map<int,int>res;
   int k=1;
  
    for (int i = 0; i < 4; i++){
        if(res.count(arr[i])){
            int def=i-res[arr[i]];
            if(def<=k){
                cout<<"yes"<<endl;
                return 0;
            }
        }
        res[arr[i]]=i;
    }
    cout<<"NO"<<endl;
    
}
