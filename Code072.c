// Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows,col;
    int i,j,sum = 0;
    
    printf("Enter rows and columns respectively : ");
    scanf("%d %d" , &rows, &col);
    int mat[rows][col];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element (%d,%d): ", i,j);
            scanf("%d" , &mat[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
           sum += mat[i][j];  
        }
    }
    printf("Sum of all elements of the matrix = %d" , sum);

    return 0;
}