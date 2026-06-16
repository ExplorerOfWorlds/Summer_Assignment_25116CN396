//**program to find pair with given sum**//
#include<iostream>
using namespace std;
int main(){
    int n,sum,found=0;
    cout<<"Enter the size of the array: ";
    cin>>n; 
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum: ";
    cin>>sum;
    cout<<"The pairs with given sum are: ";
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                found=1;
            }
        }
    }
    if(!found){
        cout<<"No pairs found with the given sum."<<endl;
    }
    return 0;
}