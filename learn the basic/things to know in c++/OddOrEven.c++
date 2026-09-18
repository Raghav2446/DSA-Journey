#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;

    if(n%2==0){
        cout<<" you number is even";
    }
    else{
        cout<<"your number "<<n<<" is odd";
    }
    return 0;
}