// Write a program to print numbers from 1 to n :

#include <stdio.h>

int main() {
    int n,i;

    printf("Enter number upto you want to print : ");
    scanf("%d" , &n);

    for ( i = 1 ; i <= n ; i++ ) {
        printf("%d \n" , i);
    }
    printf(" \n ");
    return 0;
}