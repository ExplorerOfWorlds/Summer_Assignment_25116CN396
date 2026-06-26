//**program for ATM simulation**//
#include<iostream>
using namespace std;
int main(){
    int choice;
    float balance=10000,amount;
    do{
        cout<<"\n"<<"***** ATM MENU *****"<<"\n";
        cout<<"1. Check Balance"<<"\n";
        cout<<"2. Deposit Money"<<"\n";
        cout<<"3. Withdraw Money"<<"\n";
        cout<<"4. Exit"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;
       switch(choice){
            case 1:
                cout<<"Current Balance: "<<balance<<"\n";
                break;
            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                if(amount>0){
                    balance+=amount;
                    cout<<"Amount deposited successfully."<<"\n";
                    cout<<"Current Balance: "<<balance<<"\n";
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
                    cout<<"Please collect your cash."<<"\n";
                    cout<<"Remaining Balance: "<<balance<<"\n";
                }
                break;
            case 4:
                cout<<"Thank you for using the ATM."<<"\n";
                break;
            default:
                cout<<"Invalid choice."<<"\n";
        }

    }while(choice!=4);
    return 0;
}