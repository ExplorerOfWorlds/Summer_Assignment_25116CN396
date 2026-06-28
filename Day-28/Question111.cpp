//**program for ticket booking system**//
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
struct Ticket{
    string name;
    int seats;
};
int main(){
    Ticket t;
     srand(time(0));
    int availableSeats=rand()%100+1;
    cout<<"***** TICKET BOOKING *****"<<"\n";
    cout<<"Enter passenger name: ";
    getline(cin,t.name);
    cout<<"Enter number of seats to book: ";
    cin>>t.seats;
    if(t.seats<=0){
        cout<<"Invalid number of seats."<<"\n";
    }
    else if(t.seats>availableSeats){
        cout<<"Not enough seats available."<<"\n";
    }
    else{
        availableSeats-=t.seats;
        cout<<"Booking Successful!"<<"\n";
        cout<<"Passenger Name: "<<t.name<<"\n";
        cout<<"Seats Booked: "<<t.seats<<"\n";
        cout<<"Remaining Seats: "<<availableSeats<<"\n";
    }
    return 0;
}