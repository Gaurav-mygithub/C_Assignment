#include <stdio.h>

int main() {
    float number, sum = 0;

    // Input numbers and calculate sum
    printf("Enter positive numbers to add (enter a non-positive number to stop):\n");

    while (1) {  // Infinite loop, will break on non-positive input
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number <= 0) {
            break;  // Exit loop if the number is non-positive
        }

        sum += number;  // Add positive number to sum
    }

    printf("The sum of the given numbers is: %.2f\n", sum);

    return 0;
}
