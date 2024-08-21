#include <stdio.h>

// Function to add two numbers using pointers
void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;  // Dereference pointers and calculate the sum
}

int main() {
    int num1, num2, result;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to add the numbers
    addNumbers(&num1, &num2, &result);

    // Print the result
    printf("Sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}
