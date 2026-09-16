#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0; i<n;i++){ 
        int num=1;

        for(int j=1; j<n-i+1;j++){
            cout<<num;
            num=num+1;
        }
        cout<<endl;
    }
    return 0;

}