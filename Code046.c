// Write a program to print the following pattern :

#include <stdio.h>

int main() {
    int num = 4;
    int i,j;

    if (num <= 0) {
        printf("Invalid Request !!");   
    }
    else { 
        for (i = 1; i <= num; i++) {
            for (j = 1; j <= num; j++) {
                printf("* ");
            }   
            printf("\n");
        }
    }
    return 0;
}