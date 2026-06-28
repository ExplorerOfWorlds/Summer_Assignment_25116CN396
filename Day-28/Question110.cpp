//**program for bank account system**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int accountNo,choice;
    float balance=500000,amount;
    cout<<"Enter account holder name: ";
    getline(cin,name);
    cout<<"Enter account number: ";
    cin>>accountNo;
    do{
        cout<<"\n";
        cout<<"***** ACCOUNT OPTIONS *****"<<"\n";
        cout<<"1. View Account info"<<"\n";
        cout<<"2. Deposit Money"<<"\n";
        cout<<"3. Withdraw Money"<<"\n";
        cout<<"4. Check Balance"<<"\n";
        cout<<"5. Exit"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Account Holder: "<<name<<"\n";
                cout<<"Account Number: "<<accountNo<<"\n";
                cout<<"Balance: "<<balance<<"\n";
                break;
            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                if(amount>0){
                    balance+=amount;
                    cout<<"Amount deposited successfully."<<"\n";
                }
                else{
                    cout<<"Invalid amount."<<"\n";
                }
                break;
            case 3:
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                if(amount<=0){
                    cout<<"Invalid amount."<<"\n";
                }
                else if(amount>balance){
                    cout<<"Insufficient balance."<<"\n";
                }
                else{
                    balance-=amount;
                    cout<<"Amount withdrawn successfully."<<"\n";
                }
                break;
            case 4:
                cout<<"Current Balance: "<<balance<<"\n";
                break;
            case 5:
                cout<<"Thank you for using the system."<<"\n";
                break;
            default:
                cout<<"Invalid choice."<<"\n";
        }
    }while(choice!=5);
    return 0;
}