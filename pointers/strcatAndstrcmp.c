#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to concatenate two strings
void myStrcat(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0'; // Null-terminate the concatenated string
}

// Function to compare two strings
int myStrcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

// Function to reverse a string
void myStrrev(char *str) {
    int length = 0;
    char *start = str;
    char *end = str;

    // Find the length of the string
    while (*end) {
        length++;
        end++;
    }
    end--;

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to convert string to uppercase
void myStrupr(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

int main() {
    int choice;
    char str1[100], str2[100];

    do {
        // Menu options
        printf("\nMenu:\n");
        printf("1. Concatenate two strings\n");
        printf("2. Compare two strings\n");
        printf("3. Reverse a string\n");
        printf("4. Convert a string to uppercase\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character left by scanf

        switch (choice) {
            case 1:
                // Concatenate two strings
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

                myStrcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 2:
                // Compare two strings
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

                if (myStrcmp(str1, str2) == 0) {
                    printf("Strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;

            case 3:
                // Reverse a string
                printf("Enter string to reverse: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

                myStrrev(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 4:
                // Convert string to uppercase
                printf("Enter string to convert to uppercase: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

                myStrupr(str1);
                printf("Uppercase string: %s\n", str1);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
                break;
        }

    } while (choice != 5);

    return 0;
}
