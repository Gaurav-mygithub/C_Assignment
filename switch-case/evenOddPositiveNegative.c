#include <stdio.h>

int main() {
    int number, choice;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Menu
    printf("\nOptions:\n");
    printf("1. Check if Even\n");
    printf("2. Check if Odd\n");
    printf("3. Check if Positive\n");
    printf("4. Check if Negative\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform the selected operation
    switch (choice) {
        case 1: {
            if (number % 2 == 0) {
                printf("The number %d is Even.\n", number);
            } else {
                printf("The number %d is not Even.\n", number);
            }
            break;
        }
        case 2: {
            if (number % 2 != 0) {
                printf("The number %d is Odd.\n", number);
            } else {
                printf("The number %d is not Odd.\n", number);
            }
            break;
        }
        case 3: {
            if (number > 0) {
                printf("The number %d is Positive.\n", number);
            } else {
                printf("The number %d is not Positive.\n", number);
            }
            break;
        }
        case 4: {
            if (number < 0) {
                printf("The number %d is Negative.\n", number);
            } else {
                printf("The number %d is not Negative.\n", number);
            }
            break;
        }
        default: {
            printf("Invalid choice!\n");
            break;
        }
    }

    return 0;
}
