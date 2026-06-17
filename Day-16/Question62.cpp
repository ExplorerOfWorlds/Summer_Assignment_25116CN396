//**program to find maximum frequency element in an array**//
#include<iostream>
using namespace std;
int main(){
    int n,max=0,count=0,a;
    cout<<"Enter the size of the array: ";
    cin>>n; 
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            } 
        }
        if(count>max){
            max=count;
            a=arr[i];
        }    
    }
    cout<<"The maximum frequency element is: "<<a<<" and its frequency is: "<<max;
    return 0;
}
