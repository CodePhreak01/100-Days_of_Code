// Write a program to print the following pattern :
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main() {
    int i,j;
    int num = 5;

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num; j++) {
            if (j <= i) 
                printf(" %d" , j);   
            }
        printf("\n");
    }
    return 0;
}