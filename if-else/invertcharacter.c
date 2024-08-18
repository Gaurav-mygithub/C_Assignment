#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        // Convert uppercase to lowercase
        ch = ch + ('a' - 'A');
    } else if (ch >= 'a' && ch <= 'z') {
        // Convert lowercase to uppercase
        ch = ch - ('a' - 'A');
    }

    printf("Inverted case character: %c\n", ch);

    return 0;
}
