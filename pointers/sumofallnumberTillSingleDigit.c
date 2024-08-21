#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    if (num < 10) {
        return num; // Base case: num is a single digit
    } else {
        int sum = 0;
        while (num > 0) {
            sum += num % 10; // Add the last digit to sum
            num /= 10;       // Remove the last digit
        }
        return sumOfDigits(sum); // Recursive call with the new sum
    }
}

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calculate the single digit result
    int result = sumOfDigits(number);

    // Print the result
    printf("The single-digit sum of the digits of %d is %d\n", number, result);

    return 0;
}
