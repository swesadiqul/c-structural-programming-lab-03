#include <stdio.h>

int main() {
    int number, sum = 0;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Ensure a positive number
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        printf("%d is a perfect number\n", number);
    } else {
        printf("%d is not a perfect number\n", number);
    }

    return 0;
}

