// Read and print a matrix :

#include <stdio.h>

int main() {
    int rows,col;
    int i,j;
    
    printf("Enter rows and columns respectively : ");
    scanf("%d %d" , &rows, &col);
    int mat[rows][col];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element (%d,%d): ", i,j);
            scanf("%d" , &mat[i][j]);
        }
    }
    printf("Matrix \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            printf("%d " , mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}