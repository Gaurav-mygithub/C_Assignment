#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Function to compute the area of a circle
float area_of_circle(float radius) {
    return PI * radius * radius;
}

// Function to compute the area of a rectangle
float area_of_rectangle(float length, float width) {
    return length * width;
}

// Function to compute the area of a triangle
float area_of_triangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    float radius, length, width, base, height;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Compute area of circle\n");
        printf("2. Compute area of rectangle\n");
        printf("3. Compute area of triangle\n");
        printf("4. Exit\n");
        
        // Ask for user choice
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                // Compute area of circle
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                printf("Area of the circle: %.2f\n", area_of_circle(radius));
                break;
            }
            case 2: {
                // Compute area of rectangle
                printf("Enter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);
                printf("Area of the rectangle: %.2f\n", area_of_rectangle(length, width));
                break;
            }
            case 3: {
                // Compute area of triangle
                printf("Enter the base of the triangle: ");
                scanf("%f", &base);
                printf("Enter the height of the triangle: ");
                scanf("%f", &height);
                printf("Area of the triangle: %.2f\n", area_of_triangle(base, height));
                break;
            }
            case 4: {
                // Exit
                printf("Exiting the program.\n");
                break;
            }
            default: {
                printf("Invalid choice. Please select a valid option.\n");
                break;
            }
        }
    } while (choice != 4);

    return 0;
}
