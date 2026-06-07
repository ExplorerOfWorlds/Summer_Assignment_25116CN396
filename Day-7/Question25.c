//**Program for Recursive Factorial**//
#include<stdio.h>
void factorial(int n, int fact) {
    if(n == 0 )
        printf("%d", fact);
    else
        factorial(n-1, fact*n); 
}
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);                         
    printf("Factorial of %d is: ", num);           
    factorial(num, 1);            //**going to recursive function**//
}