//**program for palindrome string**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int a=0,start=0;
    cout<<"enter the string: ";
    getline(cin,s);
    int end=s.length()-1;
    while(start<end){
         if(s[start]!=s[end]){
            cout<<"not palindrome"<<endl;
            a=1;
            break;
            }
         start++;
         end--;
    }
    if(a==0){
        cout<<"it is a palindrome"<<endl;
    }
    return 0;
}