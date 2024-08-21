#include <stdio.h>

// Recursive function to print the digits of a number in reverse order
void printReverse(int number) {
    // Base case: when number is 0, return
    if (number == 0) {
        return;
    }
    
    // Print the last digit and call the function recursively with the remaining number
    printf("%d", number % 10);
    printReverse(number / 10);
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Handle the case where the number is 0
    if (num == 0) {
        printf("Reversed number: 0\n");
    } else {
        printf("Reversed number: ");
        // Handle negative numbers by printing the negative sign and working with absolute value
        if (num < 0) {
            printf("-");
            num = -num; // Convert to positive for processing
        }
        printReverse(num);
        printf("\n");
    }

    return 0;
}
