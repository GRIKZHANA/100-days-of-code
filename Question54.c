#include <stdio.h>

int main() {
    int i, j, space;

    // Upper half (including middle line)
    for (i = 1; i <= 4; i++) {
        // Print spaces
        for (space = i; space < 4; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = 3; i >= 1; i--) {
        // Print spaces
        for (space = 3; space >= i; space--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
