#include <stdio.h>

int main() {
    int num, count = 0, total = 0;

    printf("Enter ten numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 != 0) {
            total += num;
            count++;
        }
    }

    if (count > 0) {
        double average = (double)total / count;
        printf("The total of the odd numbers is %d and their average is %.1f\n", total, average);
    } else {
        printf("No odd numbers were entered.\n");
    }

    return 0;
}
