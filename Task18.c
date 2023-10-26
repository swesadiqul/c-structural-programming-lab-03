#include <stdio.h>

int main() {
    int M, N;

    // Input from the user
    printf("Enter the height (M) of the rectangle: ");
    scanf("%d", &M);

    printf("Enter the length (N) of the rectangle: ");
    scanf("%d", &N);

    if (M <= 0 || N <= 0) {
        printf("Please enter positive integers for height and length.\n");
        return 1; // Exit with an error code
    }

    // Loop to print the rectangle
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

