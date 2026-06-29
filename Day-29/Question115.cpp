//**program for menu driven string operations system**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    int choice;
    cout<<"Enter first string: ";
    getline(cin,s1);
    do{
        cout<<"\n***** STRING OPERATIONS *****\n";
        cout<<"1. Find Length\n";
        cout<<"2. Concatenate Strings\n";
        cout<<"3. Compare Strings\n";
        cout<<"4. Reverse String\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();
        switch(choice){
            case 1:
                cout<<"Length = "<<s1.length()<<"\n";
                break;
            case 2:
                cout<<"Enter second string: ";
                getline(cin,s2);
                cout<<"Concatenated String: "<<s1+s2<<"\n";
                break;
            case 3:
                cout<<"Enter second string: ";
                getline(cin,s2);
                if(s1==s2)
                    cout<<"Strings are equal\n";
                else
                    cout<<"Strings are not equal\n";
                break;
            case 4:{
                string rev="";
                for(int i=s1.length()-1;i>=0;i--){
                    rev += s1[i];
                }
                cout<<"Reversed String: "<<rev<<"\n";
                break;
            }
            case 5:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid Choice\n";
        }
    }while(choice!=5);
    return 0;
}