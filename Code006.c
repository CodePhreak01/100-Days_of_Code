// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a,b,t;

    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);

    t = a + b;
    a = t - a;
    b = t - b;

    printf("Numbers after swapping a = %d and b = %d", a,b );
    return 0;
}
