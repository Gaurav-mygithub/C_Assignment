#include <stdio.h>

// Function to swap two integers using call-by-value
void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    // Print the swapped values
    printf("Inside swapByValue - a: %d, b: %d\n", a, b);
}

// Function to swap two integers using call-by-reference
void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // Print the swapped values
    printf("Inside swapByReference - a: %d, b: %d\n", *a, *b);
}

int main() {
    int x, y;

    // Input the values for x and y
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);

    // Call swapByValue
    printf("Before swapByValue - x: %d, y: %d\n", x, y);
    swapByValue(x, y);
    printf("After swapByValue - x: %d, y: %d\n", x, y);

    // Call swapByReference
    printf("Before swapByReference - x: %d, y: %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swapByReference - x: %d, y: %d\n", x, y);

    return 0;
}
