#include<stdio.h>
void main(){
    int a,b,GCD=0;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    //**finds GCD of two numbers by checking all possible divisors**//
    for(int i=1;i<=a && i<=b;i++){ 
        if(a%i==0 && b%i==0){ //**checking for common divisiors**//
            GCD=i;            //**stores the highest valueof common divisor**//
        }
    }
    printf("GCD of %d and %d is %d", a, b, GCD);
}
