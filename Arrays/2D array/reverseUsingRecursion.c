#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 100

// Function to print the reverse of a string using recursion
void printReverse(char str[], int length) {
    // Base case: if the length is 0, return
    if (length <= 0) {
        return;
    }

    // Print the last character of the current substring
    printf("%c", str[length - 1]);

    // Recursive call with the substring excluding the last character
    printReverse(str, length - 1);
}

int main() {
    char str[MAX_STR_LEN];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character if present

    // Find the length of the string
    int length = strlen(str);

    // Print the reverse of the string
    printf("Reverse of the string: ");
    printReverse(str, length);
    printf("\n");

    return 0;
}
