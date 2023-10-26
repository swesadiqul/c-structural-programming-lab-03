#include <stdio.h>

int main() {
    int number, count = 0;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Divisors of %d:\n", number);

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d\n", i);
            count++;
        }
    }

    printf("Total %d divisors.\n", count);

    return 0;
}

