#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32];  // Array to store binary digits (supports up to 32 bits)
    int i = 0;

    // Handle the case for 0 explicitly
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2;  // Store remainder in binary array
        n = n / 2;          // Divide the number by 2
        i++;
    }

    // Print binary digits in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert and display binary equivalent
    decimalToBinary(decimal);

    return 0;
}
