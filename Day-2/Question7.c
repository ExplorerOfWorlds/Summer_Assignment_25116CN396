#include<stdio.h>
void main(){
    int a,b=1;
    printf("enter the number: ");
    scanf("%d",&a);
   while(a>0){
    b*=a%10;
    a/=10;
   }
   printf("product of digits is %d",b);
}