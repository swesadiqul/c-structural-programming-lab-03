#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("Digits from right to left: ");
        while (number > 0) {
            int digit = number % 10;
            printf("%d", digit);
            number /= 10;
            if (number > 0) {
                printf(", ");
            }
        }
        printf("\n");
    }

    return 0;
}
