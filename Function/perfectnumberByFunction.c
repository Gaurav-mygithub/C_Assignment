#include <stdio.h>

// Function to calculate the sum of proper divisors of a number
int sumOfDivisors(int number) {
    int sum = 0;
    
    // Loop to find all divisors of the number
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    
    return sum;
}

// Function to check if a number is a perfect number
int isPerfectNumber(int number) {
    // A perfect number is a positive integer
    if (number <= 0) {
        return 0;
    }
    
    // Check if the number is equal to the sum of its proper divisors
    return (number == sumOfDivisors(number));
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a perfect number
    if (isPerfectNumber(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
