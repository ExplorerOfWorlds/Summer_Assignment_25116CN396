//**program for finding common elements in two arrays**//
#include<iostream>
using namespace std;
int main(){
    int n1,n2,a=0;
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
    int common[n1+n2];
    cout<<"common elements:  ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                common[a]=arr1[i];
                a++;
                arr2[j]=-1 //**makes it so no other element finds it as a coommon "_" **//
                break;
            }
           
        }
    }
    for(int i=0;i<a;i++){
        cout<<common[i]<<" ";
    }
    return 0;
}