#include <iostream>
#include <climits>
#include<unordered_set>
#include<string>
using namespace std;

int main() {
  string text ="abcabcbb";
  int left=0;
  int ans=INT16_MIN;
  unordered_set<char> res;
  for(int i=0;i<text.length();i++){
     if(res.count(text[i])){
        left++;
     }
     ans=max(ans,i-left+1);
     res.insert(text[i]);
  }
   cout<<"longest sub string :- "<<ans;

    return 0;
}