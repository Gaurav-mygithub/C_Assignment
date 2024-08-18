#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Menu
    printf("\nOptions:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform the selected operation
    switch (choice) {
        case 1: {
            result = num1 + num2;
            printf("Result of addition: %.2f\n", result);
            break;
        }
        case 2: {
            result = num1 - num2;
            printf("Result of subtraction: %.2f\n", result);
            break;
        }
        case 3: {
            result = num1 * num2;
            printf("Result of multiplication: %.2f\n", result);
            break;
        }
        case 4: {
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result of division: %.2f\n", result);
            } else {
                printf("Division by zero is not allowed.\n");
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

