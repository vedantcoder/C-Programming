#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return 1; // Base case: fib(0) = 0, fib(1) = 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}
