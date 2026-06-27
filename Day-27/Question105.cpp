//**program to create a student record**//
#include<iostream>
#include<string>
using namespace std;
struct Student{
    string name;
    int rollNo;
    float marks;
};
int main(){
    int n;
    cout<<"Enter the no of students: ";
    cin>>n;
    cin.ignore();
    Student s[n];
    for(int i=0;i<n;i++){
    cout<<"Enter student name: ";
    getline(cin,s[i].name);
    cout<<"Enter roll number: ";
    cin>>s[i].rollNo;
    cout<<"Enter marks: ";
    cin>>s[i].marks;
    cin.ignore();
    }
    for(int i=0;i<n;i++){
    cout<<"\n"<<"student no:"<<i+1<<"\n";
    cout<<"Name: "<<s[i].name<<"\n";
    cout<<"Roll Number: "<<s[i].rollNo<<"\n";
    cout<<"Marks: "<<s[i].marks<<"\n";
    }
    return 0;
}