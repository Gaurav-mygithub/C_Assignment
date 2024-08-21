#include <stdio.h>

int main() {
    int m, n, i, j;

    // Input the number of rows and columns for matrix A
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int A[m][n], B[n][m];

    // Input the elements of matrix A
    printf("Enter the elements of matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Calculate the transpose and store it in matrix B
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }

    // Display matrix B (the transpose of matrix A)
    printf("\nTranspose of matrix A (stored in matrix B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}

