#include <stdio.h>

int main() {
    int x, y, choice, num;
    int quotient, remainder;

    printf("Enter the first number (x): ");
    scanf("%d", &x);
    
    printf("Enter the second number (y): ");
    scanf("%d", &y);

    printf("\nOptions:\n");
    printf("1. Equality Check\n");
    printf("2. Less Than Check\n");
    printf("3. Quotient and Remainder\n");
    printf("4. Range Check\n");
    printf("5. Swap\n");
    
    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: {
            if(x == y) {
                printf("x is equal to y\n");
            } else {
                printf("x is not equal to y\n");
            }
            break;
        }
        case 2: {
            if(x < y) {
                printf("x is less than y\n");
            } else {
                printf("x is not less than y\n");
            }
            break;
        }
        case 3: {
            if (y != 0) {
                quotient = x / y;
                remainder = x % y;
                printf("Quotient: %d, Remainder: %d\n", quotient, remainder);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        }
        case 4: {
            printf("Enter a number to check if it lies between x and y: ");
            scanf("%d", &num);
            if(num >= x && num <= y) {
                printf("The number %d lies between %d and %d (inclusive)\n", num, x, y);
            } else {
                printf("The number %d does not lie between %d and %d\n", num, x, y);
            }
            break;
        }
        case 5: {
            int temp = x;
            x = y;
            y = temp;
            printf("After swapping: x = %d, y = %d\n", x, y);
            break;
        }
        default: {
            printf("Invalid choice!\n");
            break;
        }
    }

    return 0;
}
