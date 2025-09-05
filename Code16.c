// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    float num1;
    float num2;
    float num3;

    printf("Enter first number :");
    scanf("%f", &num1);

    printf("Enter second number :");
    scanf("%f", &num2);

    printf("Enter third number :");
    scanf("%f", &num3);

    if ( num1 >= num2 && num1 >= num3) {
        printf("%.2f is the largest number", num1);
    }
    else if ( num2 >= num3 && num2 >= num1) {
        printf("%.2f is the largest number", num2);
    }
    else {
        printf("%.2f is the largest number ", num3);
    }
    
    return 0;
}