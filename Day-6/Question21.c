//**Program to convert Decimal to Binary**//
#include<stdio.h>
void main(){ 
    int a,b=0,c=0,d=1;
        printf("enter the decimal number: ");
        scanf("%d",&a);
        while(a!=0){  //**Converting decimal to binary**//
            b=a%2;
            c=c+b*d;
            a/=2;
            d*=10;
        }
        printf("the binary number is: %d",c);
    }
