//**program to find the 2nd largest element in an array**//
#include<iostream>
using namespace std;
int main(){
    int n,large,second_large;
    cout<<"enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   large=second_large=arr[0];   
    for(int i=1;i<n;i++){
        if(arr[i]>large){   //**if the current element is greater than large, then assign large to second_large and current element to large**//
            second_large=large;
            large=arr[i];
        }
        else if(arr[i]>second_large && arr[i]!=large){  
            second_large=arr[i];
        }
    }
    if(second_large==large){   
        cout<<"there is no 2nd largest element in the array";
    }
    else{
        cout<<"the 2nd largest element in the array is: "<<second_large;
    } 
}