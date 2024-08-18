#include <stdio.h>

int main() {
    float marks[5];
    float total = 0.0;
    float percentage;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter marks %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 500) * 100;

    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
