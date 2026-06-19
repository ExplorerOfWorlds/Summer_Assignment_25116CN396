//**program to find diagonal sum of matrix**//
#include <iostream>
using namespace std;
int main(){
    int n,l_sum=0,r_sum=0,both_sum=0;
    cout<<"Enter the order of matrix: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(i==j)
           r_sum+=arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if((i+j)==(n-1))
           l_sum+=arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(i==j ||(i+j)==(n-1))
           both_sum+=arr[i][j];
        }
    }
    cout<<"left diagonal sum: "<<l_sum<<"\n";
    cout<<"right diagonal sum: "<<r_sum<<"\n";
    cout<<"Both digonal sum: "<<both_sum<<"\n";
}

