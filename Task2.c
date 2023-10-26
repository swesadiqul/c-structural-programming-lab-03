#include <stdio.h>

int main() {
    char c[50];
    int n;

    printf("Enter the name of your favorite car: ");
    scanf("%49s", &c);

    printf("Enter any integer number: ");
    scanf("%d", &n);

    for (int a = 0; a < n; a++) {
        printf("%s\n", c);
    }
    return 0;
}
