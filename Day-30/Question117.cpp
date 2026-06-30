//**program to create student records using arrays and string**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of students: ";
    cin>>n;
    cin.ignore();
    string name[n];
    int rollNo[n];
    float marks[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter student name: ";
        getline(cin,name[i]);
        cout<<"Enter roll number: ";
        cin>>rollNo[i];
        cout<<"Enter marks: ";
        cin>>marks[i];
        cin.ignore();
    }
    cout<<"\nStudent Records\n";
    for(int i=0;i<n;i++){
        cout<<"\nStudent No: "<<i+1<<"\n";
        cout<<"Name: "<<name[i]<<"\n";
        cout<<"Roll Number: "<<rollNo[i]<<"\n";
        cout<<"Marks: "<<marks[i]<<"\n";
    }
    return 0;
}