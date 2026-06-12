//**program for fibonacci using function**//
#include<iostream>
using namespace std;
void fibonacci(int n){
    int a=0,b=1,c;
    cout<<"The first "<<n<<" numbers in the Fibonacci series are: ";
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    fibonacci(n);
    return 0;
}