//**program for transpose of matrix**//
#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the order of matrix: ";
    cin>>m>>n;
    int arr[m][n];
    int transpose[n][m];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
    }
    cout<<"Transpose of matrix is: "<<"\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           transpose[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    