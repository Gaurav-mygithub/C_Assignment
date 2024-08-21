#include <stdio.h>

// Function to calculate the sum of odd and even numbers
void calculateSums(int *arr, int size, int *sumOdd, int *sumEven) {
    *sumOdd = 0;  // Initialize sum of odd numbers
    *sumEven = 0; // Initialize sum of even numbers

    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            *sumEven += *(arr + i); // Add to sum of even numbers
        } else {
            *sumOdd += *(arr + i); // Add to sum of odd numbers
        }
    }
}

int main() {
    int n;
    int sumOdd, sumEven;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Array to hold the integers

    // Input the elements of the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of odd and even numbers
    calculateSums(arr, n, &sumOdd, &sumEven);

    // Print the results
    printf("Sum of odd numbers: %d\n", sumOdd);
    printf("Sum of even numbers: %d\n", sumEven);

    return 0;
}
