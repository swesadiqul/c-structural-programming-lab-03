#include <stdio.h>

int main() {
    int number, count = 0;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("%d is not a prime number\n", number);
        return 0;
    }

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d is a prime number\n", number);
    } else {
        printf("%d is not a prime number\n", number);
    }

    return 0;
}

