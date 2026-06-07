//**Program for recursive sum of digits**//
#include<stdio.h>
void Sum(int n,int SumOfDigits) {
    if(n == 0)
        printf("%d", SumOfDigits);          
    else
        Sum(n/10, SumOfDigits + n%10);
}
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is: ", num);
    Sum(num, 0);  //**going to recursive function and printing the result**//
}