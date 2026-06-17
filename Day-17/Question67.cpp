//*program for intersection of two arrays*//
#include<iostream>
using namespace std;
int main(){
    int n1,n2,a;
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
    int k = 0;
    cout<<"Intersection of two arrays: ";
    for(int i=0;i<n1;i++){
        a=0;
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                for(int l=0;l<k;l++){
                    if(common[l]==arr1[i]){
                        a=1;
                        break;
                    }
                }
                if(a==0){
                    common[k] = arr1[i];
                    k++;
                }
                break;
            }
        }
    }
    for(int i=0;i<k;i++){
        cout<<common[i]<<" ";
    }
    return 0;
}                                                               