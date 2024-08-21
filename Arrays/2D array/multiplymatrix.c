#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;

    // Input the dimensions of the first matrix
    printf("Enter the number of rows and columns for the first matrix (m1 n1): ");
    scanf("%d %d", &m1, &n1);

    // Input the dimensions of the second matrix
    printf("Enter the number of rows and columns for the second matrix (m2 n2): ");
    scanf("%d %d", &m2, &n2);

    // Check if matrix addition is possible (same dimensions)
    if (m1 != m2 || n1 != n2) {
        printf("Matrix addition is not possible. The matrices must have the same dimensions.\n");
    } else {
        int A[m1][n1], B[m2][n2], sum[m1][n1];

        // Input the elements of the first matrix
        printf("Enter the elements of the first matrix (A):\n");
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n1; j++) {
                printf("Element A[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &A[i][j]);
            }
        }

        // Input the elements of the second matrix
        printf("Enter the elements of the second matrix (B):\n");
        for (i = 0; i < m2; i++) {
            for (j = 0; j < n2; j++) {
                printf("Element B[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &B[i][j]);
            }
        }

        // Matrix addition
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n1; j++) {
                sum[i][j] = A[i][j] + B[i][j];
            }
        }

        // Display the sum matrix
        printf("\nSum of the matrices (A + B):\n");
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n1; j++) {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }

    // Check if matrix multiplication is possible (columns of A == rows of B)
    if (n1 != m2) {
        printf("Matrix multiplication is not possible. The number of columns of the first matrix must equal the number of rows of the second matrix.\n");
    } else {
        int A[m1][n1], B[m2][n2], product[m1][n2];

        // Input the elements of the first matrix (if not already input for addition)
        if (m1 != m2 || n1 != n2) {
            printf("Enter the elements of the first matrix (A):\n");
            for (i = 0; i < m1; i++) {
                for (j = 0; j < n1; j++) {
                    printf("Element A[%d][%d]: ", i + 1, j + 1);
                    scanf("%d", &A[i][j]);
                }
            }
        }

        // Input the elements of the second matrix (if not already input for addition)
        if (m1 != m2 || n1 != n2) {
            printf("Enter the elements of the second matrix (B):\n");
            for (i = 0; i < m2; i++) {
                for (j = 0; j < n2; j++) {
                    printf("Element B[%d][%d]: ", i + 1, j + 1);
                    scanf("%d", &B[i][j]);
                }
            }
        }

        // Initialize the product matrix to 0
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n2; j++) {
                product[i][j] = 0;
            }
        }

        // Matrix multiplication
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n2; j++) {
                for (k = 0; k < n1; k++) {
                    product[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Display the product matrix
        printf("\nProduct of the matrices (A * B):\n");
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n2; j++) {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
