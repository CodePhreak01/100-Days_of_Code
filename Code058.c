// Find the maximum and minimum element in an array :

#include <stdio.h>

int main() {
    int num;

    printf("Enter no. of elements : ");
    scanf("%d" , &num);
    int arr[num];

    printf("Enter %d elements : \n", num);
    for (int i = 0; i < num; i++) {
        scanf("%d" , &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < num; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("max = %d \n" , max);
    printf("min = %d \n" , min);
    return 0;
}