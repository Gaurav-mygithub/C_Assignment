#include <stdio.h>

int main() {
    int i, j;

    int rows = 5; // Number of rows in the pattern

    // Loop for each row
    for (i = 1; i <= rows; i++) {
        // Print increasing part of the sequence
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing part of the sequence
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        // Move to the next line after printing all numbers in the current row
        printf("\n");
    }

    return 0;
}
