//**program for duplicates removal**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,result;
    int seen[26] = {0};
    cout<<"Enter the string: ";
    getline(cin,s);
    for(char ch : s){
        if(ch>='a' && ch<='z'){
            if(seen[ch-'a']==0){
                result += ch;
                seen[ch-'a']=1;
            }
        }
    }
    cout<<"After removing duplicates: "<<result;
    return 0;
}