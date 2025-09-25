//  Merge two arrays :

#include <stdio.h>

int main() {
    int num1,num2;

    printf("Enter no. of elements : ");
    scanf("%d" , &num1);
    int arr1[num1];

    printf("Enter %d elements : ", num1);
    for (int i = 0; i < num1; i++) {
        scanf("%d" , &arr1[i]);
    }
    printf("Enter no. of elements : ");
    scanf("%d" , &num2);
    int arr2[num2];

    printf("Enter %d elements : ", num1);
    for (int i = 0; i < num2; i++) {
        scanf("%d" , &arr2[i]);
    }
    int merge[num1+num2];
    int k = 0;

    for (int i = 0; i < num1; i++)
        merge[k++] = arr1[i];

    for (int i = 0; i < num2; i++)
        merge[k++] = arr2[i];

    printf("Merged array : \n");
    for (int i = 0; i < num1 + num2; i++)
        printf(" %d" , merge[i]);
    
    return 0;
}