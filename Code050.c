// Write a program to print the following pattern:
// *****
// ****
// ***
// **
// *

#include <stdio.h>

int main() {
    int num = 5,i,j;

    for (i = num; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}