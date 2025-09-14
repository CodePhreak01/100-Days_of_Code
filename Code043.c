// Write a program to check if a number is a strong number :

#include <stdio.h>

int factorial( int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
    fact *= i;    
    return fact;
}
int main() {
    int num,remainders,temp,sum = 0;
    
    printf("Enter your number : ");
    scanf("%d" , &num); 

    temp = num;

    while (temp != 0) {
        remainders = temp%10;
        sum += factorial(remainders);
        temp /= 10;
    }
    if (sum == num) 
        printf("%d is a strong number !!", num);
    else
        printf("%d is not a strong number !!", num);
    return 0;
}