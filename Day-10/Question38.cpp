//**program to print inverted star pyramid pattern**//
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows:";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}