//**program to check string rotation**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);
    if (s1.length() != s2.length()){
        cout<<"Not a rotation";
    }
    else{
        string temp = s1 + s1;
        if (temp.find(s2) != string::npos){
            cout<<"String is a rotation";
        }
         else{
            cout<<"Not a rotation";
        }
    }
    return 0;
}