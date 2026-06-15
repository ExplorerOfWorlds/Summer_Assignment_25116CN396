//**Program to reverse an array**//
#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reversed array: ";
   for(int i=0;i<n/2;i++){
       temp=arr[i];
       arr[i]=arr[n-1-i];
       arr[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}