// Write a program to print the sum of the first n odd numbers :

#include <stdio.h>

int main() {
    int num,i,sum = 0;

    printf("Enter number upto sum needed : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i == 1 || i%2 != 0) {
            sum = sum + i;
        }
        else {
            NULL;
        }
    }
    printf("Sum of first %d odd numbers = %d" , num , sum);
    return 0;
}