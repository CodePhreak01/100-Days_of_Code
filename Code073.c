// Q73: Find the sum of each row of a matrix and store it in an array.

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
            
        }printf("Sum of row %d = %d", i,sum);
        printf("\n");
        sum=0;    
    }
    return 0;
}    