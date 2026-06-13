//**program to find the largest and smallest element in an array**//
#include<iostream>
using namespace std;
int main(){
    int n,largest,smallest;
    cout<<"enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    largest=smallest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"the largest element in the array is: "<<largest<<endl;
    cout<<"the smallest element in the array is: "<<smallest<<endl;
    return 0;
}