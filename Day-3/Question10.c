#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the range:"); 
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){     //**checks every number in range**//
      int prime=1;             //**assume every number as prime**// //**flag variable **//
         if(i==0 || i==1){     //**0 and 1 are not prime numbers**//
            prime=0;
        }
        for(int j=2;j<=i-1;j++){  //**checks if number is divisible by any number from 2 to (i-1)**//
            if(i%j==0){      //**if number is divisible by any number other than 1 and itself, it is not prime**//
                prime=0;    //**sets prime flag variable to 0 if number is not prime**//
                break;
            }
        }        if(prime==1){
            printf("%d ",i); //**prints the prime numbers in the range**//
        }
    }