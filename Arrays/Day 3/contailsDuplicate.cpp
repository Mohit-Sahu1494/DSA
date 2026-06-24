#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
 int arr[]={1,2,3,1,2,3};
 int k=2;
 bool exit=false;
  int left=0;
  unordered_map<int,int>res;
 for(int i=0;i<6;i++){
     if(res.count(arr[i])){
        if(abs(res[arr[i]]-i)<=k){
            exit=true;
            break;
        }
        else{
            res.erase(arr[left]);
            left++;  
        }
     }
     res[arr[i]]=i;
 }
  cout<<"Status :- "<<exit<<endl;

}