//**program for checking anagram strings**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);
    if(s1.length()!=s2.length()){
        cout<<"Not an anagram";
        return 0;
    }
    int freq[26] = {0};
    for(char ch : s1){          //**for lowercase lettrs only**//
        freq[ch - 'a']++;
    }
    for(char ch : s2){
        freq[ch - 'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i] != 0){
            cout<<"Not an anagram";
            return 0;
        }
    }
    cout<<"Anagram strings";
    return 0;
}