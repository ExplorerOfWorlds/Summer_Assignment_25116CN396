//**program for palindrome using function**//
#include<iostream>
using namespace std;
void palindrome(int n){
    int temp=n,rev=0,rem;
    while(temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    if(rev==n){
        cout<<n<<" is a palindrome number."<<endl;
    }
    else{
        cout<<n<<" is not a palindrome number."<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    palindrome(n);
    return 0;
}