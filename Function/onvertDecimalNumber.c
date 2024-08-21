#include <stdio.h>

#define MAX_BITS 32

// Function to convert a decimal number to binary and print it
void decimalToBinary(int decimal) {
    char binary[MAX_BITS];
    int index = 0;

    // Handle the case when the decimal number is zero
    if (decimal == 0) {
        printf("0");
        return;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[index++] = (decimal % 2) ? '1' : '0';
        decimal /= 2;
    }

    // Print the binary number in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", binary[i]);
    }
}

int main() {
    int decimal;

    // Input the decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Print the binary representation of the decimal number
    printf("Binary representation: ");
    decimalToBinary(decimal);
    printf("\n");

    return 0;
}
