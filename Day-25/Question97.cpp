//**program to merge two sorted arrays**//
#include<iostream>
using namespace std;
int main(){
    int n1,n2,a=0,b=0,c=0;
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
    while(a<n1 && b<n2){
        if(arr1[a]<arr2[b]){
            merged[c]=arr1[a];
            a++;
        }
        else{
            merged[c]=arr2[b];
            b++;
        }
        c++;
    }
    while(a<n1){
        merged[c]=arr1[a];
        a++;
        c++;
    }
    while(b<n2){
        merged[c]=arr2[b];
        b++;
        c++;
    }
    cout<<"Merged array: ";
    for(int i=0;i<n1+n2;i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}