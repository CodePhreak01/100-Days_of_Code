// Write a program to calculate the factorial of a number :

#include <stdio.h>

int main() {
    int num,i,x = 1;

    printf("Enter the number for factorial : ");
    scanf("%d" , &num);

    for (i = num; i >= 1; i--) {
        x = x * i;
    }
    printf("Factorial of %d = %d", num ,x);
    return 0;
}