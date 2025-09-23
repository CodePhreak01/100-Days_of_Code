// Find the sum of array elements :

#include <stdio.h>

int main() {
    int num,i,sum = 0;

    printf("Enter no. of elements : ");
    scanf("%d" , &num);

    int arr[num];

    printf("Enter %d elements : \n", num);
    for (i = 0; i < num; i++) {
        scanf("%d" , &arr[i]);
        sum += arr[i];
    }
    printf("Sum of array is %d" , sum);
    return 0;
}