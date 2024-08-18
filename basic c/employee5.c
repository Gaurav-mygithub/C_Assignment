#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    char department[50];
};

int main() {
    struct Employee employees[5];

    // Accepting details of 5 employees
    for(int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Enter Employee Name: ");
        scanf(" %[^\n]%*c", employees[i].name);  // Reading string with spaces
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter Department: ");
        scanf(" %[^\n]%*c", employees[i].department);  // Reading string with spaces
        printf("\n");
    }

    // Displaying details of 5 employees
    printf("Employee Details:\n");
    for(int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Department: %s\n", employees[i].department);
        printf("\n");
    }

    return 0;
}
