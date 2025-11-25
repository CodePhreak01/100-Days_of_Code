// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each 
// subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

int main() {
    int n,k;
    int i,j;

    printf("Enter the size of array : ");
    scanf("%d" , &n);

    int arr[n];
    printf("Enter the elements : ");
    for (i = 0; i < n; i++) {
        scanf("%d" , &arr[i]);
    }

    printf("Enter the value of k : ");
    scanf("%d" , &k);

    for (i = 0; i < n-k+1; i++) {
        int max = 0;
        for (j = i; j < i+k; j++) {
            if (arr[j] >= max) {
                max = arr[j];
            }    
        }
        printf("%d " , max);
    }

    return 0;
}