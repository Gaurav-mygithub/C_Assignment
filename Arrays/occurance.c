#include <stdio.h>

int main() {
    int n, i, num, count = 0;

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

    // Input the number to count in the array
    printf("Enter the number to count occurrences (num): ");
    scanf("%d", &num);

    // Count occurrences of num in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    // Display the result
    printf("Number %d occurs %d times in the array.\n", num, count);

    return 0;
}
