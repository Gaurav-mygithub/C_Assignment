#include <stdio.h>

int main() {
    float marks[3];
    char grade[3];

    // Input marks for 3 students
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);

        // Determine the grade based on the marks
        if (marks[i] > 75) {
            grade[i] = 'A';  // Using 'A' for A+ grade
        } else if (marks[i] > 65) {
            grade[i] = 'B';  // Using 'B' for A grade
        } else {
            grade[i] = 'C';  // Using 'C' for B grade
        }
    }

    // Display the grades
    printf("\nStudent Grades:\n");
    for (int i = 0; i < 3; i++) {
        if (grade[i] == 'A') {
            printf("Student %d: Grade A+\n", i + 1);
        } else if (grade[i] == 'B') {
            printf("Student %d: Grade A\n", i + 1);
        } else {
            printf("Student %d: Grade B\n", i + 1);
        }
    }

    return 0;
}
