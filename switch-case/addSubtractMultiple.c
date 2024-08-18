#include <stdio.h>

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to simplify the fraction
void simplifyFraction(int *numerator, int *denominator) {
    int divisor = gcd(*numerator, *denominator);
    *numerator /= divisor;
    *denominator /= divisor;
}

// Function to add two fractions
void addFractions(int num1, int den1, int num2, int den2, int *numRes, int *denRes) {
    *numRes = num1 * den2 + num2 * den1;
    *denRes = den1 * den2;
    simplifyFraction(numRes, denRes);
}

// Function to subtract two fractions
void subtractFractions(int num1, int den1, int num2, int den2, int *numRes, int *denRes) {
    *numRes = num1 * den2 - num2 * den1;
    *denRes = den1 * den2;
    simplifyFraction(numRes, denRes);
}

// Function to multiply two fractions
void multiplyFractions(int num1, int den1, int num2, int den2, int *numRes, int *denRes) {
    *numRes = num1 * num2;
    *denRes = den1 * den2;
    simplifyFraction(numRes, denRes);
}

int main() {
    int num1, den1, num2, den2, numRes, denRes;
    int choice;

    // Input first fraction
    printf("Enter the numerator and denominator of the first fraction: ");
    scanf("%d %d", &num1, &den1);

    // Input second fraction
    printf("Enter the numerator and denominator of the second fraction: ");
    scanf("%d %d", &num2, &den2);

    // Menu
    printf("\nOptions:\n");
    printf("1. Add Fractions\n");
    printf("2. Subtract Fractions\n");
    printf("3. Multiply Fractions\n");

    printf("\nEnter your choice (1-3): ");
    scanf("%d", &choice);

    // Perform the selected operation
    switch (choice) {
        case 1: {
            addFractions(num1, den1, num2, den2, &numRes, &denRes);
            printf("Result of addition: %d/%d\n", numRes, denRes);
            break;
        }
        case 2: {
            subtractFractions(num1, den1, num2, den2, &numRes, &denRes);
            printf("Result of subtraction: %d/%d\n", numRes, denRes);
            break;
        }
        case 3: {
            multiplyFractions(num1, den1, num2, den2, &numRes, &denRes);
            printf("Result of multiplication: %d/%d\n", numRes, denRes);
            break;
        }
        default: {
            printf("Invalid choice!\n");
            break;
        }
    }

    return 0;
}
