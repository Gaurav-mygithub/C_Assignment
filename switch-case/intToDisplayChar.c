#include <stdio.h>

int main() {
    char startChar;
    int n;

    // Input character and integer
    printf("Enter a character: ");
    scanf(" %c", &startChar);

    printf("Enter an integer (n): ");
    scanf("%d", &n);

    // Display the next n characters
    printf("Next %d characters after '%c' are:\n", n, startChar);
    for (int i = 1; i <= n; i++) {
        printf("%c ", startChar + i);
    }
    printf("\n");

    return 0;
}
