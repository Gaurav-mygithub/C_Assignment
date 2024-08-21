#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fib(int n) {
    if (n == 1) {
        return 0; // Base case: 1st Fibonacci number is 0
    } else if (n == 2) {
        return 1; // Base case: 2nd Fibonacci number is 1
    } else {
        return fib(n - 1) + fib(n - 2); // Recursive case
    }
}

int main() {
    int n;

    // Input the number of Fibonacci numbers to display
    printf("Enter the number of Fibonacci numbers to display: ");
    scanf("%d", &n);

    // Display the first n Fibonacci numbers
    printf("The first %d Fibonacci numbers are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}
