#include <stdio.h>

// Function to check if a number is prime
int isPrime(int number) {
    if (number <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    if (number <= 3) {
        return 1; // 2 and 3 are prime numbers
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return 0; // Eliminate multiples of 2 and 3
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return 0; // Eliminate multiples of i and i + 2
        }
    }
    return 1; // Number is prime
}

int main() {
    int count = 0;
    int num = 2;

    printf("First 10 prime numbers are:\n");

    while (count < 10) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");

    return 0;
}
