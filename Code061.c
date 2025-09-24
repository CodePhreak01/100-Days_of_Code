// Search for an element in an array using linear search :

#include <stdio.h>

int main() {
    int num,i,num1;
    int match = 0;

    printf("Enter no. of elements : ");
    scanf("%d" , &num);
    int arr[num];

    printf("Enter %d elements : \n", num);
    for (i = 0; i < num; i++) {
        scanf("%d" , &arr[i]);
    }
    printf("Search for element : ");
    scanf("%d" , &num1);

    for (i = 0; i < num; i++) {
        if (arr[i] == num1) {
            match = 1;
            break;
        }    
    }
    if (match)
        printf("Found at index %d" , i);
    else 
        printf("%d Not found !!" , num1);    
    return 0;
}