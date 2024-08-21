#include <stdio.h>

// Recursive function to calculate the sum of first n natural numbers
int sumOfNaturalNumbers(int n) {
    // Base case: when n is 1, return 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: sum of first n natural numbers is n + sum of first (n-1) natural numbers
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n = 20; // Number of natural numbers to sum

    // Calculate the sum of the first 20 natural numbers
    int result = sumOfNaturalNumbers(n);

    // Print the result
    printf("The sum of the first %d natural numbers is: %d\n", n, result);

    return 0;
}
