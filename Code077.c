// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int rows, col;
    printf("Enter rows and columns respectively : ");
    scanf("%d %d", &rows, &col);

    if (rows != col) {
        printf("Matrix is not square. Diagonal check is invalid.");
        return 0;
    }
    int mat[rows][col];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element (%d,%d): ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    int isDistinct = 1; 
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (mat[i][i] == mat[j][j]) { 
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    printf("Elements on the diagonal of the matrix are distinct : ");
    if (isDistinct)
        printf("True");
    else
        printf("False");

    return 0;
}
