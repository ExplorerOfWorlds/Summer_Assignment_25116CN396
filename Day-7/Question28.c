//**program for recursive of reverse of a number**//
#include<stdio.h>
void Reverse(int n, int reversed) {
    if(n == 0)
        printf("%d", reversed);
    else
        Reverse(n/10, reversed*10 + n%10);
}
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is: ", num);
    Reverse(num, 0);
}