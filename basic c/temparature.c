#include <stdio.h>

int main() {
    float fahrenheit, celsius, kelvin;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5.0/9.0 * (fahrenheit - 32);
    kelvin = celsius + 273.15;

    printf("Temperature in Celsius: %.2f°C\n", celsius);
    printf("Temperature in Kelvin: %.2fK\n", kelvin);

    return 0;
}
