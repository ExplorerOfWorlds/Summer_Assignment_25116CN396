#include<stdio.h>
void main(){
    //**To find out the largest prime factor of a number**//
    int a,b,c=0;
    printf("enter the number: ");   
    scanf("%d",&a);
    for(b=2;b<=a;b++)   //**loop to find prime factors**//
    {
        if(a%b==0)     //**if b is a factor of a**//
        {
            c=b;       //**update c to the latest prime factor found**//
            while(a%b==0)  
            {
                a=a/b; //**divide a by b until it's no longer divisible**//
            }
        }
    }
    printf("the largest prime factor of the number is: %d",c);
}