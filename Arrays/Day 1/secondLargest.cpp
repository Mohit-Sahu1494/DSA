#include<iostream>
using namespace std;

int main(){
    int arr[]={10, 20, 5, 20, 15};
    int max=INT16_MIN;
    int sec=INT16_MIN;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            sec=max;
            max=arr[i];
        }
        else if(sec<arr[i] && arr[i]!=max){
            sec=arr[i];
        }
    }
    cout<<"First maximun Number :-"<<max<<endl;
    cout<<"Second Maximun Number :- "<<sec<<endl;
}