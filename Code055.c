// Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
#include <math.h>

int main() {
    int num,i,j,isPrime;

    printf("Enter your number: ");
    scanf("%d" , &num);
    
    if ( num < 2 ) {
        printf("Not Prime !");
    }
    else {
        for (i = 2; i <= num; i++) {
            isPrime = 1;
            for (j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
                printf(" %d" , i);
        }
    }
    return 0;
}