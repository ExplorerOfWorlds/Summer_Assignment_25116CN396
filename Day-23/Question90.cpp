//**program to find first repeating character**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int a[100]={0};
    cout<<"enter the string: ";
    getline(cin,s);
    for(char ch:s){
        if(a[ch-'a']==1){
            cout<<"the character is"<<ch;
            break; 
        }
        a[ch-'a']=1;
    }
    return 0;
}