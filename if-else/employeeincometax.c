#include <stdio.h>

int main() {
    float basic_salary, tax;

    printf("Enter the annual basic salary of the employee: ");
    scanf("%f", &basic_salary);

    if (basic_salary < 150000) {
        tax = 0;
    } else if (basic_salary <= 300000) {
        tax = 0.20 * (basic_salary - 150000);
    } else {
        tax = 0.20 * 150000 + 0.30 * (basic_salary - 300000);
    }

    printf("Income Tax = %.2f\n", tax);

    return 0;
}
