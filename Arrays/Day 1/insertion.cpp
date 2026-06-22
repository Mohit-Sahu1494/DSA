#include<iostream>
using namespace std;


void print(int arr[],int n){
  for (int  i = 0; i < n+1; i++)
  {
    cout<<arr[i]<<" ";
  }
}



void insertion(int arr[],int n,int pos,int val){
   
    for (int i = n; i > pos; i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[pos]=val;
}


int main(){
  int arr[100]={1,2,3,4,5};
  int n=5;
  int pos;
  int val;
  cout<<"Enter the position to insert the value :- ";
  cin>>pos>>val;

  insertion(arr,n,pos,val);
  print(arr,n);
}