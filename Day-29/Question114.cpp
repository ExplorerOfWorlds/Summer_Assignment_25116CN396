//**program for menu driven array operations system**//
#include<iostream>
using namespace std;
int main(){
    int n, choice;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    do{
        cout<<"\n***** ARRAY OPERATIONS *****\n";
        cout<<"1. Display Array\n";
        cout<<"2. Find Sum\n";
        cout<<"3. Find Maximum Element\n";
        cout<<"4. Search Element\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Array Elements: ";
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<'\n';
                break;
            case 2:{
                int sum=0;
                for(int i=0;i<n;i++){
                    sum += arr[i];
                }
                cout<<"Sum = "<<sum<<'\n';
                break;
            }
            case 3:{
                int max = arr[0];
                for(int i=1;i<n;i++){
                    if(arr[i] > max){
                        max = arr[i];
                    }
                }
                cout<<"Maximum Element = "<<max<<'\n';
                break;
            }
            case 4:{
                int key, found=0;
                cout<<"Enter element to search: ";
                cin>>key;
                for(int i=0;i<n;i++){
                    if(arr[i] == key){
                        cout<<"Element found at index "<<i<<'\n';
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    cout<<"Element not found\n";
                }
                break;
            }
            case 5:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid Choice\n";
        }
    }while(choice!=5);
    return 0;
}