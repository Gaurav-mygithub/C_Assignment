#include <stdio.h>

// Recursive function to calculate the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: if b is 0, return a
    } else {
        return gcd(b, a % b); // Recursive case: gcd(b, a % b)
    }
}

int main() {
    int a, b;

    // Input the two numbers
    printf("Enter two integers to find their GCD: ");
    scanf("%d %d", &a, &b);

    // Calculate the GCD
    int result = gcd(a, b);

    // Print the result
    printf("The GCD of %d and %d is %d\n", a, b, result);

    return 0;
}
