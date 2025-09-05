// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria :

#include <stdio.h>

int main() {
    float per;

    printf("Enter your percentage :");
    scanf("%f", &per);

    if (per > 89 && per <= 100) {
        printf("Your grade is A");
    }
    else if (per > 79 && per <= 89) {
        printf("Your grade is B");
    }
    else if (per > 69 && per <= 79) {
        printf("Your grade is C");
    }
    else if (per > 59 && per <= 69) {
        printf("Your grade is D");
    }
    else {
        printf("Your grade is F");
    }
    return 0;
}
