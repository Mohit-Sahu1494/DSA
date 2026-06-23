

//======================================================================================================
//  Happy number 
// =====================================================================================================


#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int num;
    cout<<"Enter your number :- ";
    cin>>num;
    
    unordered_set<int>res;

  
    //  har digit ke sum to total karke uska square nikalne ke liye kahi nunber 1 to nhi hai. 
    while (num!=1){
     
       if(res.count(num)){
        cout<<" Given number is not a happy number  "<<endl;
         return 0;
       } 
    
        
    res.insert(num);
    int sum=0;

    //  number ke digit ko square karke add karne ke liye
    
    while(num>0){   
     int digit=num%10;
     
     sum=sum+digit*digit;
     num/=10;
    }
    num=sum;
    cout<<"Sum :- "<<sum<<endl;
   
} 
cout<<"Given Number is a happy number "<<endl;
return 0; 
}
