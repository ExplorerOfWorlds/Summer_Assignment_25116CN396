//**program to find missing number in an array**//
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the size of the array: ";
    cin>>n; 
    int arr[n-1];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    int total=(n*(n+1))/2;
    cout<<"The missing number is: "<<total-sum;
    return 0;
}
