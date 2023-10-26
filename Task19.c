#include <stdio.h>

int main() {
    int N;

    // Input from the user
    printf("Enter the height of the right-angled triangle (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Loop to print the right-angled triangle
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

