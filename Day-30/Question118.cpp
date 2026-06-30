//**program to create mini libraries**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of books: ";
    cin>>n;
    cin.ignore();
    string title[n], author[n];
    int bookId[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter book title: ";
        getline(cin,title[i]);
        cout<<"Enter author name: ";
        getline(cin,author[i]);
        cout<<"Enter book ID: ";
        cin>>bookId[i];
        cin.ignore();
    }
    cout<<"\nLibrary Records\n";
    for(int i=0;i<n;i++){
        cout<<"\nBook No: "<<i+1<<"\n";
        cout<<"Title: "<<title[i]<<"\n";
        cout<<"Author: "<<author[i]<<"\n";
        cout<<"Book ID: "<<bookId[i]<<"\n";
    }
    return 0;
}