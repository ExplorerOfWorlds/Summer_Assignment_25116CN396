#include <stdio.h>  
#include <math.h>
void main()  {
    int a,b,d,c=0,e=0,f=0;
    printf("Enter a number: ");
    scanf("%d", &a);
   b=a;           //**stores the value of a in b to use it for counting the number of digits**//
    while(b>0)
    {  
       b=b/10;   //**Loop counts the no of digits in number**//
        c++;
    }
    d=a;
    while(d>0)
    {
     e=d%10;
     f=f+pow(e,c);   //*Loop puts the value of each digit raised to the power of the number of digits */
     d=d/10;
    }
    if(f==a)         //**Checking if the sum of the powers of the digits is equal to the original number**//
    {
        printf("The number is an Armstrong number.");
    }
    else
    {
        printf("The number is not an Armstrong number.");
    }
}