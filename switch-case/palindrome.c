#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int num) {
    int original = num;
    int reversed = 0;

    // Handle negative numbers as non-palindromes
    if (num < 0) {
        return 0;
    }

    // Reverse the number
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Check if the original number and reversed number are the same
    return original == reversed;
}

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is a palindrome
    if (is_palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
