//**Program to move zeros to the end of an array**//
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
    cout<<"Array after moving zeros to the end: ";
   for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
              if(arr[i]==0){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
              }
         }
   }
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    return 0;
}