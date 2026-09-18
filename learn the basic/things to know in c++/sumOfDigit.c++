#include<iostream>
using namespace std;

int sumOfDigit(int n){
    int sum=0;
    for(;n>0;n=n/10){
        int lastdigit=n%10;
        sum=sum+lastdigit;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    cout<<"the sum of the digits are  "<<sumOfDigit(n);
    return 0;
}