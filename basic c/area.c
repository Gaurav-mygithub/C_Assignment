#include <stdio.h>
#include <math.h>

int main() {
    // Declare the variables
    double radius, circumference, area;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the circumference
    circumference = 2 * M_PI * radius;

    // Calculate the area
    area = M_PI * radius * radius;

    // Display the results
    printf("The circumference of the circle is: %.2f\n", circumference);
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
