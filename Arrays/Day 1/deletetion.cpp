#include<iostream>
using namespace std;


void print(int arr[],int n){
  for (int  i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
}



int deletion(int arr[],int n,int pos,int val){
   
    for (int i = pos; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
     return n-1;
}


int main(){
  int arr[100]={1,2,3,4,5};
  int n=5;
  int pos;
  int val;
  cout<<"Enter the position to insert the value :- ";
  cin>>pos>>val;

 int size= deletion(arr,n,pos,val);
 cout<<"Size"<<size<<endl;
  print(arr,size);
}