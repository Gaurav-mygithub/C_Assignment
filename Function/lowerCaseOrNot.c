#include <stdio.h>
#include <ctype.h> // For islower() and isspace()

int main() {
    char ch;

    // Input the character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a lowercase letter or a space
    if (islower(ch)) {
        printf("The character '%c' is a lowercase letter.\n", ch);
    } else if (isspace(ch)) {
        printf("The character '%c' is a space.\n", ch);
    } else {
        printf("The character '%c' is neither a lowercase letter nor a space.\n", ch);
    }

    return 0;
}

