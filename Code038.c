// Write a program to find the sum of digits of a number :

#include <stdio.h>

int main() {
    int num,remainder,sum = 0;

    printf("Enter your number : ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num%10;
        sum += remainder;
        num /= 10;         
    }
    printf("%d" , sum);
    return 0;
}