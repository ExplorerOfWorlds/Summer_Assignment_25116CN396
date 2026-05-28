#include<stdio.h>
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
}