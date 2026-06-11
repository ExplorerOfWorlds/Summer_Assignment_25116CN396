//**program to find out maximum using function **//
#include<iostream>
using namespace std;
void maximum(int a,int b)
{
    if(a>b)
    {
        cout<<"The maximum number is: "<<a<<endl;
    }
    else if(b>a)
    {
        cout<<"The maximum number is: "<<b<<endl;
    }
    else
    {
        cout<<"Both numbers are equal."<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"Enter both numbers: ";
    cin>>a>>b;
    maximum(a,b);
    return 0;
}