//**program to print hollow square pattern**//
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
       if(i==1||i==n){                         //**for first and last row print star**//
           for(int j=1;j<=n;j++){
               cout<<"* ";
           }
        }
        else{                           //**for middle rows print star at beginning and end**//
            cout<<"* ";
            for(int j=2;j<n;j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}