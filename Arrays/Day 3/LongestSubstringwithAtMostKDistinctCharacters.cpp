#include <iostream>
#include <climits>
#include<string>
#include<unordered_map>
using namespace std;

int main() {
  string text="ecebdce";
  int left=0;
  int k=2;
   int ans=INT_MIN;
   unordered_map<char,int>mp;
   for(int i=0;i<text.size();i++){
      mp[text[i]]++;
    while (mp.size()>k){
         mp[text[left]]--;

        if(mp[text[i]]==0){
            mp.erase(text[left]);
        }
        left++;
    }
    ans=max(ans,i-left+1);
   }
   cout<<ans;

    return 0;
}