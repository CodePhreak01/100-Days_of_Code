// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter your first number: ");
    scanf("%f", &num1);

    printf("Enter your second number: ");
    scanf("%f", &num2);

    printf("Sum of numbers: %f \n", num1 + num2);
    printf("Difference of numbers: %f \n", num1 - num2);
    printf("Product of numbers: %f \n", num1 * num2);

    if (num2 == 0)
        printf("Cannot divide by zero!! \n");
    else
        printf("Quotient (num1 / num2): %f \n", num1 / num2);

    return 0;
}
