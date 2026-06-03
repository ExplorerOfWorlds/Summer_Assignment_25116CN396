#include<stdio.h>
void main(){
    int a,b,LCM=0;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    //**finds LCM of two numbers by checking all possible multiples**//
    for(int i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0){ //**checking for common multiples**//
            LCM=i;            //**stores the lowest value of common multiple**//
            break;
        }
    }
    printf("LCM of %d and %d is %d", a, b, LCM);
}