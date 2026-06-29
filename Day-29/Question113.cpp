//**program for menu driven calculator*//
#include<iostream>
using namespace std;
int main(){
    int choice;
    float a,b;
    do{
        cout<<"\n***** CALCULATOR *****\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice>=1 && choice<=4){
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }
        switch(choice){
            case 1:
                cout<<"Result = "<<a+b<<"\n";
                break;
            case 2:
                cout<<"Result = "<<a-b<<"\n";
                break;
            case 3:
                cout<<"Result = "<<a*b<<"\n";
                break;
            case 4:
                if(b!=0)
                    cout<<"Result = "<<a/b<<"\n";
                else
                    cout<<"Division by zero is not possible\n";
                break;
            case 5:
                cout<<"Exiting calculator...\n";
                break;
            default:
                cout<<"Invalid choice\n";
        }
    }while(choice!=5);
    return 0;
}