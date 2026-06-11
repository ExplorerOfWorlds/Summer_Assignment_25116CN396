//**Program to check prime using function**//
#include<iostream>
using namespace std;
void checkPrime(int n)
{
    if(n<=1)
    {
        cout<<" "<<n<<" is not a prime number."<<endl;
        return;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<" "<<n<<" is not a prime number."<<endl;
            return;
        }
    }
    cout<<n<<" is a prime number."<<endl;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    checkPrime(n);
    return 0;
}