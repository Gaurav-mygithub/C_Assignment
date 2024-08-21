#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define NAME_LENGTH 100

// Structure to store employee details
typedef struct {
    int id;
    char name[NAME_LENGTH];
    float salary;
} employee;

// Function prototypes
void inputEmployees(employee employees[], int *n);
void displayAllEmployees(employee employees[], int n);
void searchByName(employee employees[], int n);
void searchById(employee employees[], int n);
void displayHighSalary(employee employees[], int n);
void displayMaxSalary(employee employees[], int n);

int main() {
    employee employees[MAX_EMPLOYEES];
    int n = 0;
    int choice;

    // Input employee details
    inputEmployees(employees, &n);

    do {
        // Menu
        printf("\nMenu:\n");
        printf("1. Search Employee by Name\n");
        printf("2. Search Employee by ID\n");
        printf("3. Display All Employees\n");
        printf("4. Display Employees with Salary > 25000\n");
        printf("5. Display Employee with Maximum Salary\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character left by scanf

        switch (choice) {
            case 1:
                searchByName(employees, n);
                break;
            case 2:
                searchById(employees, n);
                break;
            case 3:
                displayAllEmployees(employees, n);
                break;
            case 4:
                displayHighSalary(employees, n);
                break;
            case 5:
                displayMaxSalary(employees, n);
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

// Function to input employee details
void inputEmployees(employee employees[], int *n) {
    printf("Enter number of employees: ");
    scanf("%d", n);
    getchar(); // Consume newline character left by scanf
    for (int i = 0; i < *n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        getchar(); // Consume newline character left by scanf
        printf("Name: ");
        fgets(employees[i].name, NAME_LENGTH, stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; // Remove newline character
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        getchar(); // Consume newline character left by scanf
    }
}

// Function to display all employees
void displayAllEmployees(employee employees[], int n) {
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("-------------------------\n");
    }
}

// Function to search an employee by name
void searchByName(employee employees[], int n) {
    char name[NAME_LENGTH];
    printf("Enter name to search: ");
    fgets(name, NAME_LENGTH, stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline character

    for (int i = 0; i < n; i++) {
        if (strcmp(employees[i].name, name) == 0) {
            printf("Employee found:\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Salary: %.2f\n", employees[i].salary);
            return;
        }
    }
    printf("Employee with name %s not found.\n", name);
}

// Function to search an employee by ID
void searchById(employee employees[], int n) {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    getchar(); // Consume newline character left by scanf

    for (int i = 0; i < n; i++) {
        if (employees[i].id == id) {
            printf("Employee found:\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Salary: %.2f\n", employees[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}

// Function to display employees with salary greater than 25000
void displayHighSalary(employee employees[], int n) {
    printf("\nEmployees with Salary > 25000:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > 25000) {
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("-------------------------\n");
            found = 1;
        }
    }
    if (!found) {
        printf("No employees with salary > 25000.\n");
    }
}

// Function to display the employee with the maximum salary
void displayMaxSalary(employee employees[], int n) {
    if (n == 0) {
        printf("No employees to display.\n");
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("\nEmployee with Maximum Salary:\n");
    printf("ID: %d\n", employees[maxIndex].id);
    printf("Name: %s\n", employees[maxIndex].name);
    printf("Salary: %.2f\n", employees[maxIndex].salary);
}
