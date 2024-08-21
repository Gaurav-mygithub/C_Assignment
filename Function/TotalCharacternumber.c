#include <stdio.h>

// Recursive function to count characters in a string
int countCharacters(char *str) {
    // Base case: If the end of the string is reached (null character)
    if (*str == '\0') {
        return 0;
    }
    // Recursive case: 1 (for the current character) + count of the rest of the string
    return 1 + countCharacters(str + 1);
}

int main() {
    char line[1000];  // Buffer to hold the input line

    // Input the line from the user
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    // Count the characters in the input line
    int totalCharacters = countCharacters(line);

    // Print the result
    printf("Total number of characters: %d\n", totalCharacters);

    return 0;
}
