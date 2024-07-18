#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Check if n is non-negative
    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 1; // Return an error code
    }

    printf("Fibonacci Series up to %d terms:\n", n);

    if (n >= 1) {
        printf("%d, ", first);
    }

    if (n >= 2) {
        printf("%d, ", second);
    }

    for (int i = 3; i <= n; ++i) {
        next = first + second;
        printf("%d, ", next);

        first = second;
        second = next;
    }

    printf("\n");

    return 0; // Return success
}
