////8.	Write a C program that read 5 numbers and sum of all odd values between them.

#include <stdio.h>

int main() {
    int num, sum = 0;

    // Taking input for 5 numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);

        // Check if the number is odd
        if (num % 2 != 0) {
            sum += num; // Add to sum if odd
        }
    }

    // Print the sum of odd numbers
    printf("Sum of odd values: %d\n", sum);

    return 0;
}
//Only 1 variable used!!