//**program to count words in a sentence**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int count=1;
    cout<<"enter the string: ";
    getline(cin,s);
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==' ' && s[i+1]!=' '){
        count++;
        }
    }       
    cout<<"no of words: "<<count<<endl;
    return 0;
}