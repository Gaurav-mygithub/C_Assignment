#include <stdio.h>

int main() {
    int i, j;
    char ch;
    int rows = 5; // Number of rows in the pattern

    // Loop for each row
    for (i = rows; i > 0; i--) {
        // Loop to print letters from 'A' to the current character
        for (j = 0; j < i; j++) {
            ch = 'A' + j;
            printf("%c", ch);
        }
        // Move to the next line after printing all letters in the current row
        printf("\n");
    }

    return 0;
}
