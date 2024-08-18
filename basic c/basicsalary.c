#include <stdio.h>

int main() {
    float basic_salary;
    float pf, tax, hra, da, net_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    pf = 0.02 * basic_salary;
    tax = 0.03 * basic_salary;
    hra = 0.05 * basic_salary;
    da = 0.08 * basic_salary;

    net_salary = basic_salary + hra + da - pf - tax;

    printf("Basic Salary: %.2f\n", basic_salary);
    printf("Provident Fund (PF): %.2f\n", pf);
    printf("Tax: %.2f\n", tax);
    printf("House Rent Allowance (HRA): %.2f\n", hra);
    printf("Dearness Allowance (DA): %.2f\n", da);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}
