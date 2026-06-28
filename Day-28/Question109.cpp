//**program for library management system**// 
#include<iostream>
#include<string>
using namespace std;
int main(){
    int choice;
    string books[5]={
        "C Programming",
        "C++ Programming",
        "Data Structures",
        "Operating System",
        "DBMS"
    };
    int available[5]={1,1,1,1,1};
    do{
        cout<<"***** LIBRARY MANAGEMENT SYSTEM *****"<<"\n";
        cout<<"1. Display Books"<<"\n";
        cout<<"2. Issue Book"<<"\n";
        cout<<"3. Return Book"<<"\n";
        cout<<"4. Exit"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Available Books:"<<"\n";
                for(int i=0;i<5;i++){
                    cout<<i+1<<". "<<books[i];
                    if(available[i]==1){
                        cout<<" (Available)";
                    }
                    else{
                        cout<<" (Issued)";
                    }
                    cout<<"\n";
                }
                break;
            case 2:
                int issue;
                cout<<"Enter book number to issue: ";
                cin>>issue;
                if(issue>=1&&issue<=5){
                    if(available[issue-1]==1){
                        available[issue-1]=0;
                        cout<<"Book issued successfully."<<"\n";
                    }
                    else{
                        cout<<"Book already issued."<<"\n";
                    }
                }
                else{
                    cout<<"Invalid book number."<<"\n";
                }
                break;
            case 3:
                int ret;
                cout<<"Enter book number to return: ";
                cin>>ret;
                if(ret>=1&&ret<=5){
                    if(available[ret-1]==0){
                        available[ret-1]=1;
                        cout<<"Book returned successfully."<<"\n";
                    }
                    else{
                        cout<<"Book was not issued."<<"\n";
                    }
                }
                else{
                    cout<<"Invalid book number."<<"\n";
                }
                break;
            case 4:
                cout<<"Thank you for using the library system."<<"\n";
                break;

            default:
                cout<<"Invalid choice."<<"\n";
        }
        cout<<"\n";
    }while(choice!=4);
    return 0;
}