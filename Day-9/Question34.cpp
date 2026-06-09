//**program for reverse half number pattern**//
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}