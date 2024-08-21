#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int number) {
    if (number <= 1) {
        return 0; // Not a prime number
    }
    if (number == 2) {
        return 1; // 2 is a prime number
    }
    if (number % 2 == 0) {
        return 0; // Any even number greater than 2 is not a prime number
    }
    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int originalNumber = number, sum = 0, digits = 0;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        digits++;
    }

    originalNumber = number;

    // Calculate the sum of the digits each raised to the power of the number of digits
    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += pow(digit, digits);
        originalNumber /= 10;
    }

    return (sum == number); // Check if the sum equals the original number
}

// Function to check if a number is a perfect number
int isPerfectNumber(int number) {
    if (number <= 0) {
        return 0; // Not a perfect number
    }

    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i; // Sum of proper divisors
        }
    }

    return (sum == number); // Check if the sum equals the original number
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and display if the number is a prime number
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    // Check and display if the number is an Armstrong number
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    // Check and display if the number is a perfect number
    if (isPerfectNumber(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
