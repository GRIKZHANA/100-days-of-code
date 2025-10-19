#include <stdio.h>

int main() {
    int A[10][10], diag[10];
    int n, i, j, k, isDistinct = 1;

    // Input size (square matrix)
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    // Input elements of matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Store diagonal elements
    for (i = 0; i < n; i++) {
        diag[i] = A[i][i];
    }

    // Check if diagonal elements are distinct
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }

    // Display result
    if (isDistinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
