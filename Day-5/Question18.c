#include<stdio.h>
void main(){
    //**To check if a number is strong**//
    int a,b,c,d=0,e=1;
    printf("enter the number: ");
    scanf("%d",&a);
    for(b=a;b>0;b=b/10)   //**loop to find digits of the number**//
    {
        c=b%10;         //**to get the last digit**//
        for(int i=1;i<=c;i++)  //**loop to find factorial of the digit**//
        {
            e*=i;          //**factorial of the digit**//
        }
        d+=e;          //**sum of factorials of digits**//
        e=1;           //**reset e for the next digit**//
    }
    if(d==a)
    {
        printf("the number is strong");
    }
    else
    {
        printf("the number is not strong");
    }
}