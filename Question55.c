#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {   // Loop through all numbers from 2 to n
        isPrime = 1;             // Assume i is prime

        // Check if i is divisible by any number from 2 to i-1
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;     // Not prime
                break;           // Exit loop early
            }
        }

        // If prime, print it
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
