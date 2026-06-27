//**program for marksheet generation system**//
#include<iostream>
#include<string>
using namespace std;
struct Student{
    string name;
    int rollNo;
    float Phy;
    float Chem;
    float Math;
    float total;
    float percentage;
};
int main(){
    int n;
    cout<<"Enter the no of students: ";
    cin>>n;
    cin.ignore();
    Student s[n];
    for(int i=0;i<n;i++){
        cout<<"\n<<"Enter student name: ";
        getline(cin,s[i].name);
        cout<<"Enter roll number: ";
        cin>>s[i].rollNo;
        cout<<"Enter marks in Physics: ";
        cin>>s[i].Phy;
        cout<<"Enter marks in Chemistry: ";
        cin>>s[i].Chem;
        cout<<"Enter marks in Maths: ";
        cin>>s[i].Math;
        s[i].total = s[i].Phy + s[i].Chem + s[i].Math;
        s[i].percentage = s[i].total / 3;
        cin.ignore();
    }
    for(int i=0;i<n;i++){
        cout<<"\n"<<"Marksheet of Student "<<i+1<<"\n";
        cout<<"Name: "<<s[i].name<<"\n";
        cout<<"Roll Number: "<<s[i].rollNo<<"\n";
        cout<<"Physics marks: "<<s[i].Phy<<"\n";
        cout<<"Chemistry marks: "<<s[i].Chem<<"\n";
        cout<<"Maths marks: "<<s[i].Math<<"\n";
        cout<<"Total Marks: "<<s[i].total<<"\n";
        cout<<"Percentage: "<<s[i].percentage<<"%\n";
    }
    return 0;
}
