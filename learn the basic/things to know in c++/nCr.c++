#include<iostream>
using namespace std;

int facto(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n,r;
    cout<<"enter the value of n  ";
    cin>>n;
    cout<<"enter the value of r  ";
    cin>>r;
    int bino=facto(n)/(facto(r)*facto(n-r));
    cout<<"the nCr of the binomial cofficent is  "<<bino;

    return 0;
}