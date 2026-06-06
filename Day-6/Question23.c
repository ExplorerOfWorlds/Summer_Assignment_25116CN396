//**Program to count set bits in a number**//
#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c=0,d=0,e=0,f=1,bi=0;
    printf("enter the  base of the number(2/10): ");
    scanf("%d",&a);
    if(a==2){
        printf("enter the binary number: ");
        scanf("%d",&b);
        while(b!=0){     //**Counting set bits in binary number**//
            c=b%10;
            if(c==1)
                e++;
            b/=10;
        }
    }
    else if(a==10){
        printf("enter the decimal number: ");
        scanf("%d",&b);
        while(b!=0){  //**Converting decimal to binary**//
            c=b%2;
            bi=bi+c*f;
            b/=2;
            f*=10;
        }
        while(bi!=0){     //**Counting set bits in decimal number**//
            c=bi%10;
            if(c==1)
                e++;
            bi/=10;
        }
    }
    
    else{
        printf("invalid base");
    }
    printf("the number of set bits is: %d",e);
}