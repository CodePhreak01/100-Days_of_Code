// Q80: Multiply two matrices.

#include <stdio.h>

int main() {
    int m,n,p,q;
    int i,j,k;

    printf("Enter rows and columns of matrix 1 : ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of matrix 2 : ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Invalid multiplication of matrices cannot be performed !!");
        return 0;
    }
    int mat1[m][n],mat2[p][q],mul[m][q];

    printf("Enter elements of matrix 1 :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the elements[%d][%d] : ",i,j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("Enter the elements[%d][%d] : ",i,j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            mul[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Multiplication of the matrices : \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d " , mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}