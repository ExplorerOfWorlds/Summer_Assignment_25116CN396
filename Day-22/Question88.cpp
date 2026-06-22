//**program for removing space in string**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,final;
    cout<<"enter the string: ";
    getline(cin,s);
    for(char ch:s){
        if(ch!=' '){
            final+=ch;
        }
    }
    cout<<final<<endl;
    return 0;
}