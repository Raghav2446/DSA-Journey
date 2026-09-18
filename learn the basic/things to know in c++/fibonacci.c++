#include<iostream>
using namespace std;

void fibo(int n){
    int start=1;
    int inital=0;
    for(int i=1; i<=n;i++){
        cout<<inital;
        int sum=start+inital;
        inital=start;
        start=sum;
        
    }
    
}

int main(){

    int n;
    cout<<"enter the value of for factorial"<<endl;
    cin>>n;
   fibo(n);
    return 0;
}