#include <stdio.h>

// Function to calculate factorial iteratively
unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate factorial recursively
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int main() {
    int number, choice;
    
    // Input number
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Menu
    printf("\nOptions:\n");
    printf("1. Calculate factorial iteratively\n");
    printf("2. Calculate factorial recursively\n");

    printf("\nEnter your choice (1-2): ");
    scanf("%d", &choice);

    unsigned long long result;
    
    switch (choice) {
        case 1: {
            result = factorial_iterative(number);
            printf("Factorial of %d (iteratively) is %llu\n", number, result);
            break;
        }
        case 2: {
            result = factorial_recursive(number);
            printf("Factorial of %d (recursively) is %llu\n", number, result);
            break;
        }
        default: {
            printf("Invalid choice!\n");
            break;
        }
    }

    return 0;
}
