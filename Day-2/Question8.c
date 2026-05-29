#include<stdio.h>
void main(){
    int a,b=0,c=0;
    printf("enter the number: ");
    scanf("%d",&a);
    int num=a;
    while(a>0){
        b=a%10;
        c=c*10+b;
        a/=10;
    }
    if(num==c){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }
}