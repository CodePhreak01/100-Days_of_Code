// Write a program to print the following pattern :
// *
// * *
// * * *
// * * * *
// * * * * *

#include <stdio.h>

int main() {
    int num = 5;
    int i,j;          // i = row , j = column; 

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num; j++) {
            if (i >= 1 && j <= i) 
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}