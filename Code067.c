// Insert an element in an array at a given position :

#include <stdio.h>

int main() {
    int num;
    int position, element;

    printf("Enter no. of elements : ");
    scanf("%d" , &num);
    int arr[100];

    printf("Enter the elements of array : \n");
    for (int i = 0; i < num; i++) {
        scanf("%d" , &arr[i]);
    }
    
    printf("Enter the element to insert : ");
    scanf("%d" , &element);
    
    printf("Enter position of the element : ");
    scanf("%d" , &position);

    for (int i = num; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    num++;

    for (int i = 0; i < num; i++) {
        printf("%d " , arr[i]);
    }
    return 0;
}