// Write a program to take a number as input and print its equivalent binary representation :

#include <stdio.h>

int main() {
    int num,i;
    int bin[100];

    printf("Enter your number : ");
    scanf("%d" , &num);

    for (i = num%2; i <= num; i++ )
    return 0;
}