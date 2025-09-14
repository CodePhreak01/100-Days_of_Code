// Write a program to swap the first and last digit of a number :

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped, temp;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num < 10) {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    temp = num;
    last = temp % 10;

    digits = 0;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    swapped = last * (int)pow(10, digits);
    temp = num % (int)pow(10, digits);
    swapped += temp - last + first;

    printf("Swapped number = %d\n", swapped);

    return 0;
}
