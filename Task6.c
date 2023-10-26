#include <stdio.h>

int main() {
    int n, y = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sign = 1;
    for (int i = 1; i <= n; i++) {
        y += sign * i * i;
        sign = -sign;
    }

    printf("y = %d\n", y);

    return 0;
}

