#include <stdio.h>

int main() {
    int sum = 0;
    int product = 1;  // Initialize product to 1, as multiplying by 0 would result in 0

    // Calculate the sum and product of numbers from 1 to 5
    for (int i = 1; i <= 5; ++i) {
        sum += i;
        product *= i;

        // Print the numbers for the sum separated by '+' until the last iteration
        printf("%d", i);
        if (i < 5) {
            printf(" + ");
        }
    }

    // Print the total sum
    printf(" = %d\n", sum);

    // Separate the output of sum and product
    printf("\n");

    // Calculate and print the product of numbers from 1 to 5
    for (int i = 1; i <= 5; ++i) {
        // Print the numbers for the product separated by '*' until the last iteration
        printf("%d", i);
        if (i < 5) {
            printf(" * ");
        }
    }

    // Print the total product
    printf(" = %d\n", product);


// printing the first ten fibonacci numbers

   int n = 10;
   int first = 0;
   int second = 1;
   int next;
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