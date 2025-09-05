// Write a program to input two numbers and display their sum :

#include <stdio.h>

int main() {
    int num1,num2,sum=0;

    printf("Enter your first number :");
    scanf("%d",&num1);

    printf("Enter your second number :");
    scanf("%d",&num2);

    sum=num1+num2;

    printf("Your sum is %d",sum);
    return 0;
}
