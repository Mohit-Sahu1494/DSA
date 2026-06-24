// ====================================================================================================
//  Count Window having Sum greater than x  subarray of size k
// ====================================================================================================

#include<iostream>
using namespace std;

int main(){
int arr[] = {2,1,5,1,3,2};
  int k = 3;
  int x=7;

  int sum=0;
  int count=0;

  for(int i=0;i<k;i++){
    sum=sum+arr[i];
  }
  if(sum>x){
    count++;
  }
  for(int i=k;i<6;i++){
    sum=sum-arr[i-k];
    sum=sum+arr[i];
    if(sum>x){
    count++;
  }
  }

  cout<<"Count of subarray sum will be greater than x are :- "<<count<<endl;
}