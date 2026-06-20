//**program for multiplication of two matrices**//
#include <iostream>
using namespace std;
int main(){
    int m1,m2,n1,n2;
    cout<<"Enter the order of first matrix: ";
    cin>>m1>>n1;
    cout<<"Enter the order of second matrix: ";
    cin>>m2>>n2;             
    int arr1[m1][n1];
    int arr2[m2][n2];
    int multi[m1][n2];
    if(n1!=m2){                          //**for multiplication of matrices(m1,n1::m2,n2) n1==m2**//
        cout<<"multiplication not possible";
    }
    else{
        cout<<"Enter the elements of the first array: ";
        for(int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
            cin>>arr1[i][j];
            }
        }
        cout<<"Enter the elements of the second array: ";
        for(int i=0;i<m2;i++){
            for(int j=0;j<n2;j++){
            cin>>arr2[i][j];
            }
        }
        for(int i=0;i<m1;i++){
           for(int j=0;j<n2;j++){
               multi[i][j]=0;
               for(int k=0;k<n1;k++){
                   multi[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        cout<<"multiplied matrix: ";
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                cout<<multi[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

        