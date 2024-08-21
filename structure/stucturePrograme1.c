#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 100

// Structure to store student details
typedef struct {
    int roll_no;
    char name[NAME_LENGTH];
    float marks[3];
    float percentage;
} student;

// Function prototypes
void inputStudents(student students[], int *n);
void displayAllStudents(student students[], int n);
void searchStudent(student students[], int n);
void modifyStudent(student students[], int n);
void displayAboveEighty(student students[], int n);
void displayMaxPercentage(student students[], int n);

int main() {
    student students[MAX_STUDENTS];
    int n = 0;
    int choice;

    // Input student details
    inputStudents(students, &n);

    do {
        // Menu
        printf("\nMenu:\n");
        printf("1. Search Student\n");
        printf("2. Modify Student\n");
        printf("3. Display All Students\n");
        printf("4. Display Students with Percentage > 80\n");
        printf("5. Display Student with Maximum Percentage\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                searchStudent(students, n);
                break;
            case 2:
                modifyStudent(students, n);
                break;
            case 3:
                displayAllStudents(students, n);
                break;
            case 4:
                displayAboveEighty(students, n);
                break;
            case 5:
                displayMaxPercentage(students, n);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

// Function to input student details
void inputStudents(student students[], int *n) {
    printf("Enter number of students: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        getchar(); // Consume newline character left by scanf
        fgets(students[i].name, NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline character
        printf("Marks for 3 subjects: ");
        scanf("%f %f %f", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);
        students[i].percentage = (students[i].marks[0] + students[i].marks[1] + students[i].marks[2]) / 3;
    }
}

// Function to display all students
void displayAllStudents(student students[], int n) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f, %.2f, %.2f\n", students[i].marks[0], students[i].marks[1], students[i].marks[2]);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("-------------------------\n");
    }
}

// Function to search a student by roll number
void searchStudent(student students[], int n) {
    int roll_no;
    printf("Enter roll number to search: ");
    scanf("%d", &roll_no);
    for (int i = 0; i < n; i++) {
        if (students[i].roll_no == roll_no) {
            printf("Student found:\n");
            printf("Roll Number: %d\n", students[i].roll_no);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f, %.2f, %.2f\n", students[i].marks[0], students[i].marks[1], students[i].marks[2]);
            printf("Percentage: %.2f\n", students[i].percentage);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", roll_no);
}

// Function to modify a student's details
void modifyStudent(student students[], int n) {
    int roll_no;
    printf("Enter roll number of the student to modify: ");
    scanf("%d", &roll_no);
    for (int i = 0; i < n; i++) {
        if (students[i].roll_no == roll_no) {
            printf("Enter new details for student %d:\n", roll_no);
            printf("Name: ");
            getchar(); // Consume newline character left by scanf
            fgets(students[i].name, NAME_LENGTH, stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline character
            printf("Marks for 3 subjects: ");
            scanf("%f %f %f", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);
            students[i].percentage = (students[i].marks[0] + students[i].marks[1] + students[i].marks[2]) / 3;
            printf("Student details updated.\n");
            return;
        }
    }
    printf("Student with roll number %d not found.\n", roll_no);
}

// Function to display students with percentage greater than 80
void displayAboveEighty(student students[], int n) {
    printf("\nStudents with Percentage > 80:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].percentage > 80) {
            printf("Roll Number: %d\n", students[i].roll_no);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f, %.2f, %.2f\n", students[i].marks[0], students[i].marks[1], students[i].marks[2]);
            printf("Percentage: %.2f\n", students[i].percentage);
            printf("-------------------------\n");
            found = 1;
        }
    }
    if (!found) {
        printf("No students with percentage > 80.\n");
    }
}

// Function to display the student with maximum percentage
void displayMaxPercentage(student students[], int n) {
    if (n == 0) {
        printf("No students to display.\n");
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].percentage > students[maxIndex].percentage) {
            maxIndex = i;
        }
    }

    printf("\nStudent with Maximum Percentage:\n");
    printf("Roll Number: %d\n", students[maxIndex].roll_no);
    printf("Name: %s\n", students[maxIndex].name);
    printf("Marks: %.2f, %.2f, %.2f\n", students[maxIndex].marks[0], students[maxIndex].marks[1], students[maxIndex].marks[2]);
    printf("Percentage: %.2f\n", students[maxIndex].percentage);
}
