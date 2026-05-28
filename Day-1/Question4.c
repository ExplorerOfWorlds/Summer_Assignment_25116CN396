#include<stdio.h>
void main(){
    int a,b=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a>0){
        b++;
        a/=10;
    }
    printf("Number of digits in the number is %d",b);
}