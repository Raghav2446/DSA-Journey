#include<iostream>
using namespace std;

int main(){

    int low, high;

     cout<<"enter the value in low"<<endl;
     cin>>low;
     cout<<"enter the valu of high"<<endl;
     cin>>high;
     int sum = 0; 

     for(int i= low;i<=high;i++){
         sum = sum+i;
        }    
     cout<<sum<<endl;
    return 0;
    
}