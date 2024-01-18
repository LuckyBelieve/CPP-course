#include <stdio.h>

int main() {
    int n = 10; // Number of Fibonacci numbers to generate
    int first = 0, second = 1, next;

    printf("First %d Fibonacci numbers starting from zero:\n", n);

    for (int i = 0; i < n; ++i) {
        // Print the current Fibonacci number
        printf("%d", first);

        // Add a comma and space for better readability, except for the last number
        if (i < n - 1) {
            printf(", ");
        }

        // Calculate the next Fibonacci number
        next = first + second;

        // Update variables for the next iteration
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}