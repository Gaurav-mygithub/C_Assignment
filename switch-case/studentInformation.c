#include <stdio.h>
#include <string.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    int choice;

    // Menu
    printf("Options:\n");
    printf("1. Accept Employee Details\n");
    printf("2. Display Employee Details\n");

    printf("\nEnter your choice (1-2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            // Accept employee details
            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp.name);  // To accept multi-word strings
            printf("Enter Employee ID: ");
            scanf("%d", &emp.id);
            printf("Enter Employee Salary: ");
            scanf("%f", &emp.salary);
            printf("Employee details have been accepted.\n");
            break;
        }
        case 2: {
            // Display employee details
            printf("\nEmployee Details:\n");
            printf("Name: %s\n", emp.name);
            printf("ID: %d\n", emp.id);
            printf("Salary: %.2f\n", emp.salary);
            break;
        }
        default: {
            printf("Invalid choice!\n");
            break;
        }
    }

    return 0;
}
