#include<stdio.h>   
void main()  
{     //**To check if a number is perfect **//
    int a,b,c,d=0;
    printf("enter the number: ");
    scanf("%d",&a);
    for(b=1;b<a;b++)   //**loop to find divisors excluding the number itself**//
    {
        c=a%b;
        if(c==0)         //**if the number is divisible by b then add b to d**//        
        {
          d+=b;          //**sum of divisors **//
        }
    }
    if(d==a)
    {
        printf("the number is perfect");
    }
    else
    {
        printf("the number is not perfect");
    }
}