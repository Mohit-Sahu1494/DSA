// ====================================================================================================
//  avarage of each subarray of size k
// ====================================================================================================

#include<iostream>
using namespace std;

int main(){
int arr[] = {1,2,3,4,5,6};
  int k = 3;

  int sum=0;
  int avg=0;

  for(int i=0;i<k;i++){
    sum=sum+arr[i];
  }
   cout<<"Avarage :- "<<sum/k<<endl;
  for(int i=k;i<6;i++){
    sum=sum-arr[i-k];
    sum=sum+arr[i];
     cout<<"Avarage :- "<<sum/k<<endl;
  }
}