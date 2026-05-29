#include<stdio.h>
void main(){
    int a,b=0,c=0;
    printf("enter the number: ");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        c=c*10+b;
        a/=10;
    }
    printf("reverse of the number is %d",c);
}