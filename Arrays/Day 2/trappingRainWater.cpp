#include<iostream>
#include<vector>
// ===========================================
// incomplete problem 
// ============================================

using namespace std;

void print(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int height[]={0,1,0,2,1,0,1,3,2,1,2,1};
//     vector<int> prefix(12);
//      prefix[0]=arr[0];
//     for(int i=1;i<12;i++){
//          prefix[i]=max(arr[i],prefix[i-1]);
//     }
//     print(prefix);
//     vector<int> suffix(12);
//     suffix[11]=arr[11];
//      for(int i=10;i>=0;i--){
//          suffix[i]=max(arr[i],suffix[i+1]);
//     }
//     print(suffix);
//     int water=0;
//   for(int i=0;i<12;i++){
//     water+= min(prefix[i], suffix[i]) - arr[i];
//     cout<<"water :- "<<water<<endl;
//   }



 
        int left = 0;
        int right = 11;

        int leftMax = 0;
        int rightMax = 0;

        int water = 0;

        while(left < right){

            if(height[left] < height[right]){

                if(height[left] >= leftMax){
                    leftMax = height[left];
                }
                else{
                    water += leftMax - height[left];
                }

                left++;
            }
            else{

                if(height[right] >= rightMax){
                    rightMax = height[right];
                }
                else{
                    water += rightMax - height[right];
                }

                right--;
            }
        }

   cout<<" total Water :- "<<water;

}