//**program to convert binary to decimal**//
#include<stdio.h>
#include<math.h>
void main(){
    int a,b=0,c=0,d=0;
    printf("enter the binary number: ");
        scanf("%d",&a);
        while(a!=0){     //**Converting binary to decimal**//
            b=a%10;
            c=c+b*pow(2,d);
            a/=10;
            d++;
        }
        printf("the decimal number is: %d",c);
}