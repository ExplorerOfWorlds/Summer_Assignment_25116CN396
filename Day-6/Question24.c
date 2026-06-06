//**program to find a^b without using power function**//
#include<stdio.h>
 void main(){
     int a,b,c=1;
     printf("enter the base number: "); 
        scanf("%d",&a); 
    printf("enter the power: ");
        scanf("%d",&b);    
        if(b==0)  //**any number to the power of 0 is 1**//
            printf("%d",c);
        else{
            for(int i=1;i<=b;i++){   //**calculating a^b**//
                c=c*a;
            }
            printf("%d",c);
        }
 }