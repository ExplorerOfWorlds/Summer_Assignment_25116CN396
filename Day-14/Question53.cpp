//**program of linear search**//
#include<iostream>
using namespace std;
int main(){
    int n,a,b=0;
    cout<<"enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched: ";   //**searching element in the array**//
    cin>>a;                                        
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            b=i+1;
            break;
        }
    }
    if(b==0){
        cout<<"element not found";
    }
    else{
        cout<<"element found at position: "<<b;
    }
    return 0;
}