// ====================================================================================================
//  Minimum sum subarray of size k
// ====================================================================================================

#include<iostream>
using namespace std;

int main(){
int arr[] = {2,1,5,1,3,2};
  int k = 2;

  int sum=0;
  int mini=INT16_MAX;

  for(int i=0;i<k;i++){
    sum=sum+arr[i];
  }
  mini=min(mini,sum);
  for(int i=k;i<6;i++){
    sum=sum-arr[i-k];
    sum=sum+arr[i];

    mini=min(mini,sum);
  }

  cout<<"Minimum Number :- "<<mini<<endl;

}