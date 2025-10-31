// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < m && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
    }
    for (int row = 1; row < m; row++) {
        int i = row, j = n - 1;
        while (i < m && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
    }
    return 0;
}
