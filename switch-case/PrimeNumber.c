#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    // Input upper limit
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no prime numbers less than 2.\n");
        return 0;
    }

    printf("Prime numbers between 1 and %d are:\n", n);
    
    // Print prime numbers between 1 and n
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
