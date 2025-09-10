// Write a program to implement a basic calculator using switch-case for +, -, *, /, % :

#include <stdio.h>

int main() {
    int num1,num2;
    char operator;

    printf("Enter your first number : ");
    scanf("%d" , &num1);

    printf("Enter your second number : ");
    scanf("%d" , &num2);

    printf("Enter your operator ( + , - , * , / ): ");
    scanf(" %c" , &operator);

    switch (operator) {
        case '+' :
            printf("Result : %.2f" , (float)num1 + num2);
            break;
        case '-' :
            printf("Result : %.2f" , (float)num1 - num2);
            break;
        case '*' :
            printf("Result : %.2f" , (float)num1 * num2);
            break;
        case '/' :
            if (num2 == 0) {
                printf("Not Defined !!");
            }                
            else 
                printf("Result : %.2f" , (float)num1 / num2);
            break;    
        case '%' :
            if (num2 == 0) {
                printf("Not Defined !!");
            }                
            else 
                printf("Result : %d" , num1 % num2);
            break;
            default :
                printf("Invalid operator !!");                
    }
    return 0;
}