// ====================================================================================================
//  Maximum sum subarray of size k
// ====================================================================================================

#include<iostream>
using namespace std;

int main(){
int arr[] = {2,1,5,1,3,2};
  int k = 3;

  int sum=0;
  int maxi=INT16_MIN;

  for(int i=0;i<k;i++){
    sum=sum+arr[i];
  }
  maxi=max(maxi,sum);
  for(int i=k;i<6;i++){
    sum=sum-arr[i-k];
    sum=sum+arr[i];

    maxi=max(maxi,sum);
  }

  cout<<"Maximum Number :- "<<maxi<<endl;

}