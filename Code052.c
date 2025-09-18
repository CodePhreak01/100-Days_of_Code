// Write a program to print the following pattern :

#include <stdio.h>

int main() {
    int num = 3,i,j; 
    
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= 1; j++) {
            if (j <= i) 
                printf("*");
        }           
        printf("\n");
    }
    return 0;
}