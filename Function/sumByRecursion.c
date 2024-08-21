#include <stdio.h>

// Recursive function to find the sum of digits of a number
int sumOfDigits(int number) {
    // Base case: if the number is 0, return 0
    if (number == 0) {
        return 0;
    }
    // Recursive case: sum of digits is last digit + sum of digits of the remaining number
    return (number % 10) + sumOfDigits(number / 10);
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num; // Convert to positive for sum calculation
    }

    // Calculate and print the sum of digits
    int result = sumOfDigits(num);
    printf("Sum of the digits: %d\n", result);

    return 0;
}
