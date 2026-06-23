//**program to find maximum ouccring character**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int max=0;
    char a;
    cout<<"enter the string: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            continue;
        }
        int count=1;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                s[j]=' ';
                count++;
            }
        }
        if(count>max){
            max=count;
            a=s[i];
        }
    }
    cout<<"highest frequency character:"<<a<<" "<<max;  
    return 0;
}