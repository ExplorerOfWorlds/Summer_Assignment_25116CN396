//**program for frequency of an element in an array**//
#include<iostream>
using namespace std;
int main(){
    int n,a,f=0;
    cout<<"enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element whose frequency is to be found: ";
    cin>>a;                         //**finding frequency of element**//
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            f++;
        }
    }
    cout<<"frequency of "<<a<<" is: "<<f;
    return 0;
}