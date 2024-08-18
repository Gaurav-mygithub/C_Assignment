#include <stdio.h>

int main() {
    int i, j;

    // Number of rows in the pattern
    int rows = 5;

    // Loop for each row
    for (i = rows; i > 0; i--) {
        // Loop for each column in the current row
        for (j = 0; j < i; j++) {
            printf("*");
        }
        // Move to the next line after printing all columns in the current row
        printf("\n");
    }

    return 0;
}
