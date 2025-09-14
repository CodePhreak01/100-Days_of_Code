// Write a program to check if a number is prime :

#include <stdio.h>
#include <math.h>

int main() {
    int num,i,isPrime = 1;

    printf("Enter your number : ");
    scanf("%d" , &num);

    if (num <= 1) {
        printf("Not Prime.");
    }
    for (i = 2; i <= sqrt(num); i++) {
        if (num%i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("%d is a Prime Number ", num);
    }
    else {
        printf("%d is not a Prime Numeber ", num);
    }
    return 0;
}