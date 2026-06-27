//**program to create a employee management system**//
#include<iostream>
#include<string>
using namespace std;
struct Employee{
    string name;
    int empId;
    string designation;
    float salary;
};
int main(){
    int n;
    cout<<"Enter the no of employees: ";
    cin>>n;
    cin.ignore();
    Employee e[n];
    for(int i=0;i<n;i++){
        cout<<"\n"<<"Enter employee name: ";
        getline(cin,e[i].name);
        cout<<"Enter employee ID: ";
        cin>>e[i].empId;
        cin.ignore();
        cout<<"Enter designation: ";
        getline(cin,e[i].designation);
        cout<<"Enter salary: ";
        cin>>e[i].salary;
        cin.ignore();
    }
    cout<<"\nEmployee Records\n";
    for(int i=0;i<n;i++){
        cout<<"\n"<<"Employee No: "<<i+1<<"\n";
        cout<<"Name: "<<e[i].name<<"\n";
        cout<<"Employee ID: "<<e[i].empId<<"\n";
        cout<<"Designation: "<<e[i].designation<<"\n";
        cout<<"Salary: "<<e[i].salary<<"\n";
    }
    return 0;
}