//**program to count vowels and consonats**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int vow=0,cons=0;
    cout<<"enter the string: ";
    getline(cin,s);
    for(char ch:s){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                vow++;
               }
            else{
                cons++;
            }
        }
    }
    cout<<"Vowels: "<<vow<<"\n";
    cout<<"Consonants: "<<cons;
    return 0;
}