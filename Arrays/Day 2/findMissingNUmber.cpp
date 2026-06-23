// =============================================================================================
//     find the missing number 
// =============================================================================================

#include<iostream>
using namespace std;
int main(){
    int arr[]={6,1,2,3,5};
    int total=0;
    int sum=0;
    for (int i = 0; i <= 6; i++)
    {
      total=total+i;
    }
    for (int i = 0; i <5; i++)
    {
      sum=sum+arr[i];
    }
    cout<<"Total sum of range :- "<<total<<endl;
    cout<<"Sum of all element of an array :- "<<sum<<endl;
    cout<<"Misisng number :- "<<total-sum<<endl;



    



}