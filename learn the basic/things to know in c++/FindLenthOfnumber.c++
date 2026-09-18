#include<iostream>
using namespace std;

int lenthOfString(int n){
    int i;
    for(i=0;n>0;i++){
        n=n/10;
        }
        return i;
}

int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    cout<<"the length of the digits is start form 1 :-  "<<lenthOfString(n);
    return 0;
}