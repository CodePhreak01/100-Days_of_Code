// Rotate an array to the right by k positions :

#include <stdio.h>

int main() {
    int n;
    int i,k = 0;

    printf("Enter the size of the array : ");
    scanf("%d" , &n);
    int arr[n];

    printf("Enter the elements : ");
    for (i = 0; i < n; i++) {
        scanf("%d" , &arr[i]);
    }
    printf("Enter how many positions to rotate (left rotation) : ");
    scanf("%d" , &k);
    
    int new[n];
    int j = 0;

    for (i = k; i < n; i++) {
        new[j++] = arr[i];
    }
    for (i = 0; i < k; i++) {
        new[j++] = arr[i];
    }
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", new[i]);
    }
    return 0;
}