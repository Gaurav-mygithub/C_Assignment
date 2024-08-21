#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR_LEN 100

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Length\n");
    printf("2. Copy\n");
    printf("3. Concatenation\n");
    printf("4. Compare\n");
    printf("5. Reverse\n");
    printf("6. Uppercase\n");
    printf("7. Lowercase\n");
    printf("8. Check Case\n");
    printf("9. Exit\n");
    printf("Enter your choice: ");
}

void getString(char *str, const char *prompt) {
    printf("%s", prompt);
    fgets(str, MAX_STR_LEN, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character
}

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    int choice;
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN], result[MAX_STR_LEN];

    do {
        displayMenu();
        scanf("%d", &choice);
        getchar(); // Consume newline character left by scanf

        switch (choice) {
            case 1: // Length
                getString(str1, "Enter a string: ");
                printf("Length of the string: %zu\n", strlen(str1));
                break;

            case 2: // Copy
                getString(str1, "Enter the source string: ");
                strcpy(result, str1);
                printf("Copied string: %s\n", result);
                break;

            case 3: // Concatenation
                getString(str1, "Enter the first string: ");
                getString(str2, "Enter the second string: ");
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4: // Compare
                getString(str1, "Enter the first string: ");
                getString(str2, "Enter the second string: ");
                int cmp = strcmp(str1, str2);
                if (cmp == 0) {
                    printf("The strings are equal.\n");
                } else if (cmp < 0) {
                    printf("The first string is less than the second string.\n");
                } else {
                    printf("The first string is greater than the second string.\n");
                }
                break;

            case 5: // Reverse
                getString(str1, "Enter a string: ");
                reverseString(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 6: // Uppercase
                getString(str1, "Enter a string: ");
                for (int i = 0; str1[i]; i++) {
                    str1[i] = toupper(str1[i]);
                }
                printf("Uppercase string: %s\n", str1);
                break;

            case 7: // Lowercase
                getString(str1, "Enter a string: ");
                for (int i = 0; str1[i]; i++) {
                    str1[i] = tolower(str1[i]);
                }
                printf("Lowercase string: %s\n", str1);
                break;

            case 8: // Check Case
                getString(str1, "Enter a string: ");
                int hasUpper = 0, hasLower = 0;
                for (int i = 0; str1[i]; i++) {
                    if (isupper(str1[i])) hasUpper = 1;
                    if (islower(str1[i])) hasLower = 1;
                }
                if (hasUpper && hasLower) {
                    printf("The string has both uppercase and lowercase characters.\n");
                } else if (hasUpper) {
                    printf("The string has only uppercase characters.\n");
                } else if (hasLower) {
                    printf("The string has only lowercase characters.\n");
                } else {
                    printf("The string has no alphabetic characters.\n");
                }
                break;

            case 9: // Exit
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 9.\n");
                break;
        }
    } while (choice != 9);

    return 0;
}
