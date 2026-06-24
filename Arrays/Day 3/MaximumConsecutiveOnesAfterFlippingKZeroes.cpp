#include <iostream>
#include <climits>
using namespace std;

int main() {
   int arr[]={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
   int n=11;
   int left=0;
   int count=0;
   int ans=INT_MIN;
   for(int i=0;i<n;i++){
    if(arr[i]==0) count++;

    while (count>k){
        if(arr[left]==0){
            count--;
        }
       left++;
    }
    ans=max(ans,i-left+1);
   }
   cout<<ans;

    return 0;
}