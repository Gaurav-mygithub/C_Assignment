#include <stdio.h>

int main() {
    float num1, num2, num3, min, max;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    // Find the maximum value
    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // Find the minimum value
    min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    printf("Minimum value: %.2f\n", min);
    printf("Maximum value: %.2f\n", max);

    return 0;
}
