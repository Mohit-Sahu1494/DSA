
// =============================================================================
//    Two Sum Problem  #leetcode No :- 
// =============================================================================

#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
   int nums[] = {2,7,11,15};
   
  int  target = 9;
   
 unordered_map<int,int>mp;
   
 for(int i=0;i<4;i++){
    int need=target-nums[i];
    if(mp.count(need)){
        cout<<mp[need]<<" "<<i<<endl;
        break;
    }
    mp[nums[i]]=i;
 }

}