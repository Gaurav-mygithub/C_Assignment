#include <stdio.h>

int main() {
    char ch;
    // Enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("The ASCII value of %c is %d.\n", ch, (int)ch);
    return 0;
}
