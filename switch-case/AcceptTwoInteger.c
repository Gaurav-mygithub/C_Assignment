#include <stdio.h>

// Function to compute power
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int x, n;

    // Input base and exponent
    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    // Compute x raised to the power of n
    int result = power(x, n);

    // Display the result
    printf("%d raised to the power of %d is %d\n", x, n, result);

    return 0;
}
