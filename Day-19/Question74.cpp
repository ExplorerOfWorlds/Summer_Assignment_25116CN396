//**program for subtraction of two matrices**//
#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the order of matrices: ";
    cin>>m>>n;
    int arr1[m][n];
    int arr2[m][n];
    int diffrence[m][n];
    cout<<"Enter the elements of the first array: ";
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cin>>arr1[i][j];
        }
    }
     cout<<"Enter the elements of the second array: ";
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cin>>arr2[i][j];
        }
     }
    cout<<"Diffrence of two matirices is:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            diffrence[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<diffrence[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    