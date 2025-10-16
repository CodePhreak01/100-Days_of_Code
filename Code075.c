// Q75: Add two matrices.

#include <stdio.h>

int main() {
    int rows, col;
    int i, j;
    
    printf("Enter rows and columns respectively : ");
    scanf("%d %d" , &rows, &col);
    int mat1[rows][col];
    int mat2[rows][col];
    int sum[rows][col];
    
    printf("\nEnter elements for matrix 1: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element (%d,%d): ", i,j);
            scanf("%d" , &mat1[i][j]);
        }
    }
    printf("\nEnter elements for matrix 2: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element (%d,%d): ", i,j);
            scanf("%d" , &mat2[i][j]);
        }
    }
    printf("\nSum of matices : \n");
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = mat1[i][j]+mat2[i][j]; 
            printf("%d " , sum[i][j]);
        }
        printf("\n");
    }  
    return 0;
}    