//**program for column wise sum**//
#include <iostream>
using namespace std;
int main(){
    int m,n,sum;
    cout<<"Enter the order of matrix: ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
    }
    cout<<"column wise sum: ";
    for(int j=0;j<n;j++){
        cout<<j+1<<" column's sum: ";
        sum=0;
        for(int i=0;i<m;i++){
            sum+=arr[i][j];
            }
            cout<<sum<<"\n";
        }
    return 0;
}
        
