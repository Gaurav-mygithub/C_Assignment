#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int i = 0;

    // Input the sentence from the user
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Process the sentence
    printf("Processed sentence:\n");
    while (sentence[i] != '\0') {
        if (sentence[i] == ' ') {
            // Replace space with '*'
            printf("*");
        } else if (isalpha(sentence[i])) {
            // Reverse the case of alphabetic characters
            if (islower(sentence[i])) {
                printf("%c", toupper(sentence[i]));
            } else {
                printf("%c", tolower(sentence[i]));
            }
        } else if (isdigit(sentence[i])) {
            // Replace digits with '#'
            printf("#");
        } else {
            // Print all other characters as they are
            printf("%c", sentence[i]);
        }
        i++;
    }

    printf("\n");

    return 0;
}
