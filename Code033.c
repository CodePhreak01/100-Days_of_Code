// Write a program to check if a number is an Armstrong number :

#include <stdio.h>
#include <math.h>

int main() {
    int num, remainder, n=0, store;
    double result = 0;

    printf("Enter your number : ");
    scanf("%d" , &num);

    store = num;

    while (store != 0) {
        store /= 10;
        n++;
    }
    
    store = num;

    while (store != 0) {
        remainder = store % 10;
        result += pow(remainder,n);
        store /= 10;
    }
    if ((int)result == num) {
        printf("%d is an Armstrong Number ", num);
    }
    else {
        printf("%d is not an Armstrong Number ", num);
    }
    return 0;
}