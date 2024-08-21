#include <stdio.h>

// Function to find maximum and minimum between two numbers
void findMaxMin(int a, int b, int *max, int *min) {
    if (a > b) {
        *max = a;
        *min = b;
    } else {
        *max = b;
        *min = a;
    }
}

// Function to check whether a number is even or odd
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
}

// Function to print Pascal's Triangle up to 'n' rows
void printPascalsTriangle(int n) {
    for (int line = 0; line < n; line++) {
        int C = 1;  // Initialize first element of the row

        for (int i = 0; i <= line; i++) {
            printf("%d ", C);
            C = C * (line - i) / (i + 1);  // Calculate the next element
        }
        printf("\n");
    }
}

int main() {
    int num1, num2;
    int max, min;
    int number, rows;

    // Input two numbers and find maximum and minimum
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    findMaxMin(num1, num2, &max, &min);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    // Input a number and check if it's even or odd
    printf("Enter a number to check if it's even or odd: ");
    scanf("%d", &number);
    checkEvenOdd(number);

    // Input the number of rows for Pascal's Triangle and print it
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    printPascalsTriangle(rows);

    return 0;
}
