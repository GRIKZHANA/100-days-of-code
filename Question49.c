#include <stdio.h>

int main() {
    int i, j;
    
    // Outer loop for each row
    for(i = 5; i >= 1; i--) {
        // Inner loop to print numbers from i to 5
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next row
    }
    
    return 0;
}
