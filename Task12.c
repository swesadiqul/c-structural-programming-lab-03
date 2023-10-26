#include <stdio.h>
#include <math.h>

int main() {
    int number, count = 0;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Ensure a positive number
    if (number < 0) {
        number = -number;
    }

    int temp = number;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    // Calculate the divisor for the leftmost digit
    int divisor = pow(10, count - 1);

    printf("Digits from left to right: ");

    // Print the digits from left to right
    while (divisor > 0) {
        int digit = number / divisor;
        printf("%d", digit);

        number %= divisor;
        divisor /= 10;

        if (divisor > 0) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
