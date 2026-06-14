//**program to find duplicate elements in an array**//
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
    cout<<"duplicate elements in the array are: ";
    for(int i=0;i<n;i++){
        int k;              //**skipping already checked elements**//
        for(k=0;k<i;k++){
            if(arr[i]==arr[k]){
                break;
            }
        }
        if(k==i){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    cout<<arr[i]<<" ";
                    a++;
                    break;
                }
            }
        }
    }
 if(a==0){
      cout<<"no duplicate elements found in the array";
 }
    return 0; }