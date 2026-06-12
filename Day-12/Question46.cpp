//**program for armstrong number using function**//
#include<iostream>
using namespace std;
void armstrong(int n){
    int temp=n,rev=0,rem;
    while(temp!=0){
        rem=temp%10;
        rev=rev+rem*rem*rem;
        temp/=10;
    }
    if(rev==n){
        cout<<n<<" is an armstrong number."<<endl;
    }
    else{
        cout<<n<<" is not an armstrong number."<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    armstrong(n);
    return 0;
}