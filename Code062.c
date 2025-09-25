// Reverse an array without taking extra space : 

#include <stdio.h>

int main() {
    int num,i;
    
    printf("Enter no. of elements : ");
    scanf("%d" , &num);
    int arr[num];

    printf("Enter %d elements : ", num);
    for (i = 0; i < num; i++) {
        scanf("%d" , &arr[i]);
    }
    for (int j = arr[num - 1]; j > 0; j--) {
        printf(" %d" , j);
    }
    return 0;
}