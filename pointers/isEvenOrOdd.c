#include <stdio.h>

// Function to check if a number is even
int isEven(int number) {
    return (number % 2 == 0) ? 1 : 0; // Return 1 if even, 0 otherwise
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n]; // Array to hold the integers

    // Input elements for the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Check if each number is even or odd
    for (int i = 0; i < n; i++) {
        if (isEven(numbers[i])) {
            printf("%d is even.\n", numbers[i]);
        } else {
            printf("%d is odd.\n", numbers[i]);
        }
    }

    return 0;
}
