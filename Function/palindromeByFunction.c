#include <stdio.h>

// Helper function to find the length of the number
int findLength(int number) {
    int length = 0;
    while (number != 0) {
        number /= 10;
        length++;
    }
    return length;
}

// Recursive function to check if a number is a palindrome
int isPalindromeRecursive(int number, int *originalNumber, int length) {
    // Base case: if the length is 0 or 1, the number is a palindrome
    if (length <= 0) {
        return 1;
    }

    // Calculate the first and last digits
    int firstDigit = (*originalNumber / (int)pow(10, length - 1)) % 10;
    int lastDigit = number % 10;

    // Check if first and last digits are equal
    if (firstDigit != lastDigit) {
        return 0;
    }

    // Remove the first and last digits and reduce the length
    number /= 10;
    *originalNumber %= (int)pow(10, length - 1);
    length -= 2;

    // Recursive call
    return isPalindromeRecursive(number, originalNumber, length);
}

int main() {
    int num;
    int originalNum;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        printf("Negative numbers are not considered palindromes.\n");
        return 0;
    }

    originalNum = num;
    int length = findLength(num);

    // Check if the number is a palindrome
    if (isPalindromeRecursive(num, &originalNum, length)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
