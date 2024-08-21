#include <stdio.h>

// Function to calculate x raised to the power y
double power(double x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

// Function to calculate factorial of n
long factorial(int n) {
    long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate the sum of the first n terms of the Taylor series for sin(x)
double sinTaylorSeries(double x, int terms) {
    double sum = 0.0;
    for (int i = 0; i < terms; i++) {
        int exponent = 2 * i + 1;
        double term = power(x, exponent) / factorial(exponent);
        if (i % 2 == 0) {
            sum += term; // Add term for even i
        } else {
            sum -= term; // Subtract term for odd i
        }
    }
    return sum;
}

int main() {
    double x;
    int n;

    // Input the value of x and the number of terms
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the number of terms to approximate sin(x): ");
    scanf("%d", &n);

    // Calculate the approximation of sin(x) using Taylor series
    double result = sinTaylorSeries(x, n);

    // Print the result
    printf("Approximation of sin(%lf) using %d terms: %lf\n", x, n, result);

    return 0;
}
