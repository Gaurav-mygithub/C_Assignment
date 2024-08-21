#include <stdio.h>
#include <limits.h>

#define MAX_STR_LEN 100
#define CHAR_RANGE 256

// Function to find the maximum occurring character in a string
char findMaxOccurringChar(char str[]) {
    int count[CHAR_RANGE] = {0}; // Array to store frequency of characters
    int maxCount = 0;
    char maxChar = '\0';

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find the character with the maximum frequency
    for (int i = 0; i < CHAR_RANGE; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = (char)i;
        }
    }

    return maxChar;
}

int main() {
    char str[MAX_STR_LEN];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character if present

    // Find and display the maximum occurring character
    char maxChar = findMaxOccurringChar(str);
    printf("Maximum occurring character: %c\n", maxChar);

    return 0;
}
