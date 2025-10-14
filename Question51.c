#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 5; i >= 1; i--) {   // outer loop for rows
        // print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // print numbers
        for (k = i; k <= 5; k++) {
            printf("%d", k);
        }

        printf("\n");  // move to next line
    }

    return 0;
}
