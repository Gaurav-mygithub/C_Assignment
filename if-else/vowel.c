#include <stdio.h>

int main() {
    char ch;

    printf("Enter a lowercase character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("The character entered is not a lowercase letter.\n");
    }

    return 0;
}
