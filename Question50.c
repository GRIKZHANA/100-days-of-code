#include <stdio.h>

int main() {
    int i, j, n = 5;

    // Outer loop for each row
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
