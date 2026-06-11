//**program to find sum of two numbers using function **//
#include<iostream>
using namespace std;
void sum(int a,int b)
{
    int s=a+b;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<s<<endl;
}
int main(){
    int a,b;
    cout<<"Enter both numbers: ";
    cin>>a>>b;
    sum(a,b);
    return 0;
}