#include<stdio.h>
int main(){
    int a,b=0;
    printf("enter the number: ");
    scanf("%d",&a);
    while(a>0){
        b+=a%10;
        a/=10;
    }
    printf("sum=%d",b);
    return 0;
}