#include <stdio.h>

int main() {
    const float pi = 3.14;
    float radius, height, surfaceArea, volume;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    surfaceArea = 2 * pi * radius * radius + 2 * pi * radius * height;
    volume = pi * radius * radius * height;

    printf("Surface Area of the cylinder = %.2f\n", surfaceArea);
    printf("Volume of the cylinder = %.2f\n", volume);

    return 0;
}
