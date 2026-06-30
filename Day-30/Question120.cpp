//**program for mini project using arrays and strings**//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string movie[100],rating[100];
    int count=0,choice,r;
    do{
        cout<<"***** MOVIE RATING *****"<<"\n";
        cout<<"1. Add Movie Rating"<<"\n";
        cout<<"2. View Ratings"<<"\n";
        cout<<"3. Exit"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();
        switch(choice){
            case 1:
                cout<<"Enter movie name: ";
                getline(cin,movie[count]);
                cout<<"Select Rating:"<<"\n";
                cout<<"1. Skip"<<"\n";
                cout<<"2. Timepass"<<"\n";
                cout<<"3. Go For It"<<"\n";
                cout<<"4. Perfection"<<"\n";
                cout<<"Enter choice: ";
                cin>>r;
                cin.ignore();
                if(r==1){
                    rating[count]="Skip";
                }
                else if(r==2){
                    rating[count]="Timepass";
                }
                else if(r==3){
                    rating[count]="Go For It";
                }
                else if(r==4){
                    rating[count]="Perfection";
                }
                else{
                    cout<<"Invalid rating."<<"\n";
                    break;
                }
                count++;
                cout<<"Rating added successfully."<<"\n";
                break;
            case 2:
                if(count==0){
                    cout<<"No movies rated yet."<<"\n";
                }
                else{
                    cout<<"***** MOVIE RATINGS *****"<<"\n";
                    for(int i=0;i<count;i++){
                        cout<<"Movie: "<<movie[i]<<"\n";
                        cout<<"Rating: "<<rating[i]<<"\n";
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