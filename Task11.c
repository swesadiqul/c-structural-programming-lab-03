#include <stdio.h>

int main() {
    int number, count = 0;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Ensure a positive number
    if (number < 0) {
        number = -number;
    }

    // Count the number of digits
    while (number != 0) {
        number = number / 10;
        count++;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
