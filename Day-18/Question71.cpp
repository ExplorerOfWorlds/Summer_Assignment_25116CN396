//**program for binary search**//
#include<iostream>
using namespace std;
int main(){
    int a,n,BEG=0,MID,END;
     cout<<"enter the array size: ";
    cin>>n;
    END=n-1;
    MID=(BEG+END)/2;
    int arr[n];
    cout<<"enter sorted array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the number to be searched: ";
    cin>>a;
    while(BEG<=END){
        if(arr[MID]>a){
            END=MID-1;
            MID=(BEG+END)/2;
        }
        else if(arr[MID]<a){
                 BEG=MID+1;
                 MID=(BEG+END)/2;
        } 
        else{
            cout<<"the elemrnt is at: "<<MID;   
            break;  
           }
    }
}