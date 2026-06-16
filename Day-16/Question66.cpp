//**program to remove duplicates from an array**//
#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cout<<"enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array after removing duplicates: ";
    for(int i=0;i<n;i++){
        int k;              //**skipping already checked elements**//
        for(k=0;k<i;k++){
            if(arr[i]==arr[k]){
                break;
            }
        }
        if(k==i){
           arr[a]=arr[i]; 
           a++;  
        }
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    return 0; 
}