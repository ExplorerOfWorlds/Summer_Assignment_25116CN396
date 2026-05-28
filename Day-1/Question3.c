#include<stdio.h>
void main(){
    int a,b=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        b*=i;
    }
    printf("Factorial of %d is %d",a,b);
}