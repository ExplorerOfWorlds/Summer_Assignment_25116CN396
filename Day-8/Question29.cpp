//**program to print half pyramid pattern**//
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){  
        for(int j=1;j<=i;j++){
            cout<<"* ";          //**i don't know what to write and where to write comments**//
        }
      cout<<endl;
    }
    return 0;
}