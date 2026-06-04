#include<stdio.h>
void main(){
    int a=0,b=1,c,n;
    printf("enter the term required of fibbonaci: ");  
    scanf("%d",&n);
    //** calculating the required term of fibbonaci series **//
    for(int i=3;i<=n;i++){  
    c=a+b;            //** calculating next term **//
    a=b;              //** updating a **//
    b=c;              //** updating b **//
    }
    printf("%d",c);   //** printing the required term **//
}