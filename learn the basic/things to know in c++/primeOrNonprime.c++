#include<iostream>
using namespace std;

int main(){ 
    int a;
    cout<<"enter the numbers = ";
    cin>>a;
    for(int i=2;i<a;i++){
        if(a%i==0){
            cout<<"the number you enter is non prine number";
            break;

        }
        else{
            cout<<"the number you entered is prime number";
            break;

        }
        
    }


 return 0;
    }

