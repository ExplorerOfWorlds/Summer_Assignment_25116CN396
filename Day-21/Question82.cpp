//**program to reverse a string**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, rev = "";
    cout<<"Enter the string: ";
    getline(cin,s);
    for(int i=s.length()-1;i>=0;i--){
        rev += s[i];
    }
    cout<<"Reversed string: "<<rev<<endl;
    return 0;
}