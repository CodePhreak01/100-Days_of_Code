// Delete an element from an array :

#include <stdio.h>

int main() {
    int num,position;

    printf("Enter no. of elements : ");
    scanf("%d" , &num);
    int arr[100];

    printf("Enter the elements : \n");
    for (int i = 0; i < num; i++) {
        scanf("%d" , &arr[i]);
    }
    printf("Enter the position you want to delete : ");
    scanf("%d" , &position);

    for (int i = position; i < num - 1; i++) {
        arr[i] = arr[i + 1];
    }
    num--;

    printf("Result array : \n");

    for (int i = 0; i < num; i++) {
        printf("%d " , arr[i]);
    }
    return 0;
}