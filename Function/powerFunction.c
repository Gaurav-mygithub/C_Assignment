#include <stdio.h>

// Recursive function to calculate the power of a number
int power(int base, int exponent) {
    // Base case: Any number raised to the power of 0 is 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: base^exponent = base * base^(exponent-1)
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent, result;

    // Input base and exponent from the user
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Check for non-negative exponent
    if (exponent < 0) {
        printf("Exponent should be a non-negative integer.\n");
        return 1;
    }

    // Calculate the power of the number
    result = power(base, exponent);

    // Print the result
    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}
