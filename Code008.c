// Write a program to find and display the sum of the first n natural numbers :

#include <stdio.h>

int main() {
    int n,sum = 0;

    printf("Enter a positive number : ");
    scanf("%d",&n);

    sum = (n * (n+1))/2;

    printf("Sum of first %d numbers is %d",n,sum );

    return 0;
}
