#include<stdio.h>
void main(){
    int a=0,b=1,c,n;
    printf("enter the no of term of fibbonaci: ");  
    scanf("%d",&n);
    printf("%d\n%d\n",a,b); //** printing first two terms **//
    for(int i=3;i<=n;i++){  
    c=a+b;                  //** calculating next term **//
    printf("%d \n",c);     
    a=b;                   //** updating the value of a and b for next iteration **//
    b=c;
    }
}