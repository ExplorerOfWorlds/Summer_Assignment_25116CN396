//**program to find the sum and average of array elements**//
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    float avg;
    cout<<"enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    avg=(float)sum/n;
    cout<<"the sum of array elements is: "<<sum<<endl;
    cout<<"the average of array elements is: "<<avg<<endl;
    return 0;
}