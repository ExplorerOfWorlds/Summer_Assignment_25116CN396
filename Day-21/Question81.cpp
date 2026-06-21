//**program to find stringlenth without strlen functions**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int count=0;
    cout<<"enter the string: ";
    getline(cin,s);
    for(char ch:s){
        count++;
    }          
    cout<<"total length: "<<count<<endl;
    return 0;

}