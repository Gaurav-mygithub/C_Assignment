#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Using a third variable
    int t = a;
    a = b;
    b = t;

    printf("After swapping using third variable: a = %d, b = %d\n", a, b);
}