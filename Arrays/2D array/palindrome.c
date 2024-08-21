#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR_LEN 100

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Skip non-alphanumeric characters
        while (!isalnum(str[start]) && start < end) {
            start++;
        }
        while (!isalnum(str[end]) && start < end) {
            end--;
        }

        // Compare characters (case-insensitive)
        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        }

        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str[MAX_STR_LEN];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character if present

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
