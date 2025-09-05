// Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer :");
    scanf("%d", &num);

    if (num%2 == 0) {
        printf("%d is an even integer ",num);    
    }
    else if (num%2 != 0) {
        printf("%d is an odd integer ",num);
    }
    else
        printf("Please enter a valid integer !!");
    return 0;
}
