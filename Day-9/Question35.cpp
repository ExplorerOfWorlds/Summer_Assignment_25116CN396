//**Program for repeated character pattern**//
#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';   //**initialize character to 'A'**//
    cout<<"enter no of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}