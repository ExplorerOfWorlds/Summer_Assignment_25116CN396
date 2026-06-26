#include<iostream>
using namespace std;
int main(){
    int score=0;
    char answer;
    cout<<"**** QUIZ APPLICATION ****"<<"\n";
    cout<<"\n";
    cout<<"1. Where is the Esports World Cup (EWC) 2026 being held?"<<"\n";
    cout<<"a) Riyadh"<<"\n";
    cout<<"b) Paris"<<"\n";
    cout<<"c) Tokyo"<<"\n";
    cout<<"d) Dubai"<<"\n";
    cout<<"Your answer: ";
    cin>>answer;
if(answer=='b'||answer=='B'){
    score++;
}
    cout<<"\n";
    cout<<"2. Which loop is guaranteed to execute at least once?"<<"\n";
    cout<<"a) for"<<"\n";
    cout<<"b) while"<<"\n";
    cout<<"c) do-while"<<"\n";
    cout<<"d) foreach"<<"\n";
    cout<<"Your answer: ";
    cin>>answer;
    if(answer=='c'||answer=='C'){
        score++;
    }
    cout<<"\n";
    cout<<"3. Which operator is used to find the remainder after division?"<<"\n";
    cout<<"a) /"<<"\n";
    cout<<"b) %"<<"\n";
    cout<<"c) *"<<"\n";
    cout<<"d) //"<<"\n";
    cout<<"Your answer: ";
    cin>>answer;
    if(answer=='b'||answer=='B'){
        score++;
    }
    cout<<"\n";
    cout<<"4. Which planet is known as the Red Planet?"<<"\n";
    cout<<"a) Earth"<<"\n";
    cout<<"b) Mars"<<"\n";
    cout<<"c) Jupiter"<<"\n";
    cout<<"d) Saturn"<<"\n";
    cout<<"Your answer: ";
    cin>>answer;
    if(answer=='b'||answer=='B'){
        score++;
    }
    cout<<"\n";
    cout<<"5. How many bits are there in one byte?"<<"\n";
    cout<<"a) 4"<<"\n";
    cout<<"b) 8"<<"\n";
    cout<<"c) 16"<<"\n";
    cout<<"d) 32"<<"\n";
    cout<<"Your answer: ";
    cin>>answer;
    if(answer=='b'||answer=='B'){
        score++;
    }
    cout<<"\n";
    cout<<"**** RESULT ****"<<"\n";
    cout<<"Your Score: "<<score<<"/5"<<"\n";
    if(score==5){
        cout<<"Excellent!"<<"\n";
    }
    else if(score>=3){
        cout<<"Good Job!"<<"\n";
    }
    else{
        cout<<"Keep Practicing!"<<"\n";
    }
    return 0;
}