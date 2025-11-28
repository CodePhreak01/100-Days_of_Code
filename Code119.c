// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated
// element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the array size : ");
    scanf("%d" , &n);

    int num[n];
    int k[500] = {0};

    printf("Enter the elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d" , &num[i]);
    }

    for (int i = 0; i < n; i++) {
        if (k[num[i]] == 1) {
            printf("Repeated element = %d" , num[i]);
            break;
        }
        k[num[i]] = 1;
    }
    return 0;
}