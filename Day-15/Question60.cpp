//**Program to rotate an array left**//
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
    cout<<"Rotated array: ";
   temp=arr[0];
   for(int i=0;i<n-1;i++){
       arr[i]=arr[i+1];
   }
   arr[n-1]=temp;
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}