
#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the key to search for
    printf("Enter the number to search (key): ");
    scanf("%d", &key);

    // Search for the key in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    // Display the result
    if (found) {
        printf("Key %d is present in the array at position %d.\n", key, i + 1);
    } else {
        printf("Key %d is not present in the array.\n", key);
    }

    return 0;
}
