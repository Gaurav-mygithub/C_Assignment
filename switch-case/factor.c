#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    printf("Factors of %d are:\n", number);

    // Calculate and display the factors
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
