#include <stdio.h>
#include <math.h>

int main() {
    float radius;
    int choice;
    float area, circumference, volume;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("\nOptions:\n");
    printf("1. Area of Circle\n");
    printf("2. Circumference of Circle\n");
    printf("3. Volume of Sphere\n");

    printf("\nEnter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            area = M_PI * radius * radius;
            printf("Area of the circle: %.2f\n", area);
            break;
        }
        case 2: {
            circumference = 2 * M_PI * radius;
            printf("Circumference of the circle: %.2f\n", circumference);
            break;
        }
        case 3: {
            volume = (4.0/3.0) * M_PI * pow(radius, 3);
            printf("Volume of the sphere: %.2f\n", volume);
            break;
        }
        default: {
            printf("Invalid choice!\n");
            break;
        }
    }

    return 0;
}
