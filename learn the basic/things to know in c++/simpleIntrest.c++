#include<iostream>
using namespace std;

int main(){
    int p,r,t;
    cout<<"enter the principal amount ";
    cin>>p;
    cout<<"enter the rate of intrest";
    cin>>r;
    cout<<"enter the time";
    cin>>t;

    int simpleIntrest=p*r*t;
    cout<<" the simple interst is  "<<simpleIntrest;


    return 0;
}