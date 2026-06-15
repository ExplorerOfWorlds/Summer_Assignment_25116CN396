//**Program to rotate an array right**//
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
   temp=arr[n-1];
   for(int i=n-1;i>0;i--){
       arr[i]=arr[i-1];
   }
   arr[0]=temp;
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}