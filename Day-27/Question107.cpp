//**program to create salary management**//
#include<iostream>
#include<string>
using namespace std;
struct Employee{
    string name;
    int empId;
    float salary;
};
int main(){
    int n;
    float totalSalary = 0;
    cout<<"Enter the no of employees: ";
    cin>>n;
    cin.ignore();
    Employee e[n];
    for(int i=0;i<n;i++){
        cout<<"\n"<<"Enter employee name: ";
        getline(cin,e[i].name);
        cout<<"Enter employee ID: ";
        cin>>e[i].empId;
        cout<<"Enter salary: ";
        cin>>e[i].salary;
        totalSalary += e[i].salary;
        cin.ignore();
    }
    cout<<"\n"<<"Salary Records"<<"\n";
    for(int i=0;i<n;i++){
        cout<<"\nEmployee No: "<<i+1<<"\n";
        cout<<"Name: "<<e[i].name<<"\n";
        cout<<"Employee ID: "<<e[i].empId<<"\n";
        cout<<"Salary: "<<e[i].salary<<"\n";
    }
    cout<<"\n"<<"Total Salary Expense: "<<totalSalary<<endl;
    return 0;
}