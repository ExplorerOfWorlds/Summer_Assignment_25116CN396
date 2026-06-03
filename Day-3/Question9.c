#include<stdio.h>
void main(){
    int a,b,c=0;
    printf("Enter the number:");
    scanf("%d",&a); 
    if (a==0 || a==1) //**0 and 1 are not prime numbers**//
    {
        printf(" %d is not a prime number", a);
        return;
    }
    for(b=2;b<a;b++){ //**checks if number is divisible by any number from 2 to (a-1)**//
        if(a%b==0){ //**if number is divisible by any number other than 1 and itself, it is not prime**//
            c=b; //**Stores the value of b if the number is not prime**//
            break;
        }
    }
    if(c!=0){ 
        printf(" %d is not a prime number", a);
    }
    else{
        printf(" %d is a prime number", a);
    }
}