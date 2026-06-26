//**program to create a number guessing game**//
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int number = rand() % 1000 + 1;
    int guess, attempts = 0;
    cout<<"Guess the number (1-1000): ";
    do{
        cin>>guess;
        attempts++;
        if(guess>number){
            cout<<"Number is lower,Try again: ";
        }
        else if(guess<number){
            cout<<"Number is higher,Try again: ";
        }
        else{
            cout<<"Congratulations! You guessed the number in "
                <<attempts<<" attempts.";
        }
    }while(guess!=number);
    return 0;
}