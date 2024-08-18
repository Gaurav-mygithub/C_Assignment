#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("The number is negative: %d\n", num);
    } else {
        printf("The number is not negative.\n");
    }

    return 0;
}
