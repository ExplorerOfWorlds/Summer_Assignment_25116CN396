//**program for contact management system**//
#include<iostream>
#include<string>
using namespace std;
struct Contact{
    string name;
    string phone;
};
int main(){
    Contact c[100];
    int count=0,choice;
    do{
        cout<<"***** CONTACT MANAGEMENT *****"<<"\n";
        cout<<"1. Add Contact"<<"\n";
        cout<<"2. View Contacts"<<"\n";
        cout<<"3. Exit"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();
        switch(choice){
            case 1:
                cout<<"Enter Name: ";
                getline(cin,c[count].name);
                cout<<"Enter Phone Number: ";
                getline(cin,c[count].phone);
                count++;
                cout<<"Contact added successfully."<<"\n";
                break;
            case 2:
                if(count==0){
                    cout<<"No contacts found."<<"\n";
                }
                else{
                    cout<<"***** CONTACT LIST *****"<<"\n";
                    for(int i=0;i<count;i++){
                        cout<<"Contact "<<i+1<<"\n";
                        cout<<"Name: "<<c[i].name<<"\n";
                        cout<<"Phone: "<<c[i].phone<<"\n";
                        cout<<"\n";
                    }
                }
                break;
            case 3:
                cout<<"Thank you for using the system."<<"\n";
                break;
            default:
                cout<<"Invalid choice."<<"\n";
        }
        cout<<"\n";
    }while(choice!=3);
    return 0;
}