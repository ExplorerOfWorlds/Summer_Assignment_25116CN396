//**program for finding character frequency**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==-1){
            continue;
        }
        int count=1;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                s[j]=-1;
                count++;
            }
        }
        cout<<s[i]<<"'s frequency="<<count<<endl;
    }    
    return 0;
}

