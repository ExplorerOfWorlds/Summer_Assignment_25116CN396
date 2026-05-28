#include<stdio.h>
void main(){
    int a,b=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        b+=i;
    }
    printf("Sum of first %d natural numbers is %d",a,b);
}