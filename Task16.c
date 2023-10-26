#include <stdio.h>

int main() {
    int quantity;
    int max = -2147483648; // Initialize max to the smallest possible integer value
    int min = 2147483647;  // Initialize min to the largest possible integer value
    int sum = 0;

    // Input quantity from the user
    printf("Enter the quantity of numbers: ");
    scanf("%d", &quantity);

    if (quantity <= 0) {
        printf("Invalid quantity. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Input and calculate max, min, and sum
    for (int i = 1; i <= quantity; i++) {
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }

        sum += num;
    }

    // Calculate the average
    float average = (float)sum / quantity;

    // Print the results
    printf("Maximum %d\n", max);
    printf("Minimum %d\n", min);
    printf("Average is %.1f\n", average);

    return 0;
}

