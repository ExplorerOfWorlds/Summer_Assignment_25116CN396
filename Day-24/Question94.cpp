//**program to compress string**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,temp = "",compressed = "";
    cout<<"Enter a string: ";
    getline(cin, s);
    for(char ch : s){
        if(ch!=' '){  //**for removal of spaces**//
            temp+=ch;
        }
    }
    for(int i=0;i<temp.length();i++){
        int count=1;
        while(i+1<temp.length() && temp[i]==temp[i+1]){
            count++;
            i++;
        }
        compressed+=temp[i];
        compressed+=to_string(count);
    }
    cout<<"Compressed string: "<<compressed;
    return 0;
}