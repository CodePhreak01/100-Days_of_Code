// Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find
// the kth smallest element in the array. Print the kth smallest element as output.

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

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Enter the value of k : ");
    scanf("%d" , &k);

    printf("%d" , arr[n-k]);
    return 0;
}