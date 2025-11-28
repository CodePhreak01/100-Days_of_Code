// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n 
// except for one. Print that missing number

#include <stdio.h>

int main() {
    int n,k=0;

    printf("Enter the size of array : ");
    scanf("%d" , &n);

    int num[n];
    int arraysum = 0;

    printf("Enter the elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d" , &num[i]);
        arraysum += num[i];
    }

    int sum = n*(n+1)/2;

    k = sum - arraysum;

    printf("Missing number = %d" , k);

    return 0;
}