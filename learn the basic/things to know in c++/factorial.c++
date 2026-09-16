#include<iostream>
using namespace std;
//whitout loop

int fact(int n){
    
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
// using loops
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n;i++){
        fact=fact*i;
        }
    return fact;
}

int main(){

    int n;
    cout<<"enter the value of for factorial"<<endl;
    cin>>n;
    cout<<"factorial of n with loop  =  "<<factorial(n)<<endl;

    cout<<"factorial of n without loop  =  "<<fact(n);
    return 0;
}