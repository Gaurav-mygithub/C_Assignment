#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 100
#define MAX_STR_COUNT 100

int main() {
    int n;
    char strings[MAX_STR_COUNT][MAX_STR_LEN];
    int i;
    char *longest;
    
    // Input the number of strings
    printf("Enter the number of strings (n): ");
    scanf("%d", &n);
    getchar(); // Consume newline character left by scanf

    // Input the strings
    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        fgets(strings[i], MAX_STR_LEN, stdin);
        // Remove the newline character from the end of the string
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    // Find the longest string
    longest = strings[0];
    for (i = 1; i < n; i++) {
        if (strlen(strings[i]) > strlen(longest)) {
            longest = strings[i];
        }
    }

    // Display the longest string
    printf("\nThe longest string is:\n%s\n", longest);

    return 0;
}
