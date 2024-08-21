#include <stdio.h>
#include <stdbool.h>

// Function to check if a matrix is symmetric
bool isSymmetric(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

// Function to calculate the trace of the matrix
int traceOfMatrix(int matrix[][100], int n) {
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

// Function to check if the matrix is an upper triangular matrix
bool isUpperTriangular(int matrix[][100], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n, i, j;

    // Input the size of the square matrix (n x n)
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[100][100];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    if (isSymmetric(matrix, n)) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is not symmetric.\n");
    }

    // Display the trace of the matrix
    int trace = traceOfMatrix(matrix, n);
    printf("The trace of the matrix is: %d\n", trace);

    // Check if the matrix is an upper triangular matrix
    if (isUpperTriangular(matrix, n)) {
        printf("The matrix is an upper triangular matrix.\n");
    } else {
        printf("The matrix is not an upper triangular matrix.\n");
    }

    return 0;
}
