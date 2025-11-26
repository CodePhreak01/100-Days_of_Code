// Q117: Write a program to take two sorted mergeays of size m and n as input. Merge both the mergeays such that the 
// merged mergeay is also sorted. Print the merged mergeay.

#include <stdio.h>

int main() {
    int m,n;
    int i,j;

    printf("Enter the sizes of arrays m and n respectively : ");
    scanf("%d %d" , &m , &n);

    int num1[m] , num2[n];
    printf("Enter the elements for array 1 : ");
    for (i = 0; i < m; i++) {
        scanf("%d" , &num1[i]);
    }

    printf("Enter the elements for array 2 : ");
    for (j = 0; j < n; j++) {
        scanf("%d" , &num2[j]);
    }

   int merge[m+n];
    int k = 0;

    for (int i = 0; i < m; i++)
        merge[k++] = num1[i];

    for (int i = 0; i < n; i++)
        merge[k++] = num2[i];

    for (i = 0; i < m+n - 1; i++) {
        for (j = 0; j < m+n - i - 1; j++) {
            if (merge[j] > merge[j + 1]) {
                int temp = merge[j];
                merge[j] = merge[j + 1];
                merge[j + 1] = temp;
            }
        }
    }
    printf("\t\n Merged array - ");  
    for (i = 0; i < m+n; i++) {
        printf("%d " , merge[i]);
    }    

    return 0;
}    