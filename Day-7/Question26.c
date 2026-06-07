//**Program for Recursive Fibonacci**//
#include<stdio.h>
int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)        //**first two terms**//
        return 1;
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("fibbonacci upto %d is: ", num);
    for(int i = 0; i < num; i++) {   //**printing fibonacci series upto num**//
        printf("%d ", fibonacci(i));
    }
}