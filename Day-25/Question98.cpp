//**program to find common characters in string**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,s1,s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);
    cout<<"Common characters: ";
    for(int i=0;i<s1.length();i++){
        for(int j=0;j<s2.length();j++){
            if(s1[i]==s2[j]){
                s+=s2[j];
                s2[j]='1';
                break;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}