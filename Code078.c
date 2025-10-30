// Q78: Find the sum of main diagonal elements for a square matrix :

#include <stdio.h>

int main() {
    int rows,col,sum=0;

    printf("Enter rows and columns of the matrix : ");
    scanf("%d %d", &rows, &col);

    if (rows != col) {
        printf("Matrix is not square. Diagonal check is invalid ");
        return 0;
    }
    int mat[rows][col];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter the elements[%d][%d] : " , i,j);
            scanf("%d" , &mat[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {
                sum += mat[i][j];
            }
        }
    }
    printf("Sum of diagonal elements = %d" , sum);
    return 0;
}