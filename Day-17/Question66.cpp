//**program for union of two arrays**//
#include<iostream>
using namespace std;
int main(){
    int n1,n2,a,b=0;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    cout<<"Enter the size of second array: ";
    cin>>n2;
    int arr1[n1],arr2[n2];
    cout<<"Enter the elements of first array: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int merged[n1+n2];
    for(int i=0;i<n1;i++){
        a=0;
        for(int j=0;j<b;j++){
          if(merged[j]==arr1[i]){
              a=1;
              break;
          }
        }
        if(a==0){
            merged[b]=arr1[i];
            b++;
        }
    }
    for(int i=0;i<n2;i++){
            a=0;
        for(int j=0;j<b;j++){
          if(merged[j]==arr2[i]){
              a=1;
              break;
          }
        }
        if(a==0){
            merged[b]=arr2[i];
            b++;
        }
    }
    cout<<"Union of two arrays: ";
    for(int i=0;i<b;i++){
        cout<<merged[i]<<" ";
    }   
    return 0;
}