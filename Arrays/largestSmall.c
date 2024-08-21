#include <stdio.h>

int main() {
    int n, i;
    float largest, smallest, range;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    float numbers[n];

    // Input the first number
    printf("Enter number 1: ");
    scanf("%f", &numbers[0]);
    largest = smallest = numbers[0];

    // Input remaining numbers and determine the largest and smallest
    for (i = 1; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);

        if (numbers[i] > largest)
            largest = numbers[i];
        if (numbers[i] < smallest)
            smallest = numbers[i];
    }

    // Calculate the range
    range = largest - smallest;

    // Display results
    printf("The largest number is: %.2f\n", largest);
    printf("The smallest number is: %.2f\n", smallest);
    printf("The range of the elements in the array is: %.2f\n", range);

    return 0;
}
