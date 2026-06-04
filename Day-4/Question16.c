#include <stdio.h>  
#include <math.h>
void main()  {
    int a,b,c=0,d=0,e=0,f=0,g=0;
    printf("Enter the range: ");
    scanf("%d%d", &a, &b);
   for(int i=a;i<=b;i++){
    d=i;c=0;g=0;   //**Reseting variables for each number**//
    while(d>0)
    {  
       d=d/10;   //**Loop counts the no of digits in number**//
        c++;
    }
    e=i;
    while(e>0)
    {
     f=e%10;
     g=g+pow(f,c);   //*Loop puts the value of each digit raised to the power of the number of digits */
     e=e/10;
    }
    if(g==i)         //**Checking if the sum of the powers of the digits is equal to the original number**//
    {
        printf("%d ", i);
    }
   }
