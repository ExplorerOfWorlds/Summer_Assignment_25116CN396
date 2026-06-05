#include<stdio.h>
void main(){
    //**To print factors of a number**//
    int a,b;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("factors of %d are: ",a); 
    for(b=1;b<=a;b++)
    {                  //**loop to find factors**//
        if(a%b==0)
        {
            printf("%d ",b);
        }
    }
}