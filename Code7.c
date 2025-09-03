// Write a program to swap two numbers without using a third variable :

#include <stdio.h>

int main() {
    int a,b;

    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);

    a = a + b;                // Swapping numbers 
    b = a - b;
    a = a - b;
    
    printf("Numbers after swapping a = %d and b =%d", a,b );
    return 0;
}