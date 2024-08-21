#include <stdio.h>

// Recursive function to calculate x raised to the power y
double power(double x, int y) {
    if (y == 0) {
        return 1; // Base case: x^0 is 1
    } else if (y > 0) {
        return x * power(x, y - 1); // Recursive case: x^y = x * x^(y-1)
    } else {
        return 1 / power(x, -y); // Handling negative exponents: x^(-y) = 1 / x^y
    }
}

int main() {
    double x;
    int y;

    // Input the base and exponent
    printf("Enter the base (x): ");
    scanf("%lf", &x);

    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    // Calculate x raised to the power y
    double result = power(x, y);

    // Print the result
    printf("%lf raised to the power %d is %lf\n", x, y, result);

    return 0;
}
