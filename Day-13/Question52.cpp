//**program to count even and odd elements in an array**//
#include<iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cout<<"enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"the number of even elements in the array is: "<<even<<endl;
    cout<<"the number of odd elements in the array is: "<<odd<<endl;
    return 0;
}