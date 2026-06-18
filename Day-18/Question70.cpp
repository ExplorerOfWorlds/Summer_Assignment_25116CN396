//**program for selection sort**//
#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"soted array using selection sort: ";
     for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}