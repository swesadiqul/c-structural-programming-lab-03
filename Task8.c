#include <stdio.h>

int main() {
    int N, sum = 0;

    // Input the value of N
    printf("Enter a number, N: ");
    scanf("%d", &N);

    // Calculate the summation of multiples of 7 up to N
    for (int i = 7; i <= N; i += 7) {
        sum += i;
    }

    // Display the result
    printf("The summation of multiples of 7 up to %d is %d\n", N, sum);

    return 0;
}
