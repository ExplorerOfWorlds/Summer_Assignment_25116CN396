//**program to check symmetry of matrix**//
#include<iostream>
using namespace std;
int main(){
    int n,a=0;
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
            if(arr[i][j]!=arr[j][i]){
                a=1;
                break;
            }
        }
    }
    if(a==0){
        cout<<"matrix is symmetric";
    }
    else{
        cout<<"matix is unsymmetric";
    }
    return 0;
}