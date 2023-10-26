#include <stdio.h>

int main() {
    int N;

    // Input from the user
    printf("Enter the size of the square: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Loop to print the square
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("+");
        }
        printf("\n");
    }

    return 0;
}

