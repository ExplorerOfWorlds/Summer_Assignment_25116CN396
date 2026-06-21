//**program to convert lowercase to uppercase**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: ";
    getline(cin,s);
    for(char &ch:s){
        if(ch>='a' && ch<='z'){
            ch=ch-32;
        }
    }
    cout<<"converted string: "<<s;      