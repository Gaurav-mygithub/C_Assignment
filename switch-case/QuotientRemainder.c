#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    // Input dividend and divisor
    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Check if divisor is zero
    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Exit with an error code
    }

    // Compute quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Display the results
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
