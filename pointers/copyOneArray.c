#include <stdio.h>

// Function to copy the contents of one array to another using pointers
void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i); // Copy each element
    }
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int sourceArray[n];      // Source array
    int destinationArray[n]; // Destination array

    // Input elements for the source array
    printf("Enter %d integers for the source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sourceArray[i]);
    }

    // Copy elements from source array to destination array
    copyArray(sourceArray, destinationArray, n);

    // Print the source array
    printf("Source array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sourceArray[i]);
    }
    printf("\n");

    // Print the destination array
    printf("Destination array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");

    return 0;
}

