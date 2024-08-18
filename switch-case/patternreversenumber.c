#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows in the pattern

    // Loop for each row
    for (i = rows; i > 0; i--) {
        // Loop to print numbers in descending order
        for (j = i; j > 0; j--) {
            printf("%d", j);
        }
        // Move to the next line after printing all numbers in the current row
        printf("\n");
    }

    return 0;
}
