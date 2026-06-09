//**program for inverse half pyramid star pattern**//
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}