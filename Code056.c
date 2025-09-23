// Read and print elements of a one-dimensional array :

#include <stdio.h>

int main() {
    int num,i;
    
    printf("Enter number of elements : ");
    scanf("%d" , &num);
    int arr[num];

    printf("Enter %d elements : \n" , num);
    for (i = 0; i < num; i++) {
        scanf("%d" , &arr[i]);
    }
    printf("Elements in array are : \n");
    for (i = 0; i < num; i++) {
        printf("%d " , arr[i]);
    }
    return 0;
}