// Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345

#include <stdio.h>

int main() {
    int num = 5,i,j;

    for (i = 1; i <= num; i++) {
        for (j = num - i + 1; j <= num; j++) {
            printf(" %d" , j);
        }
        printf("\n");
    }
    return 0;
}