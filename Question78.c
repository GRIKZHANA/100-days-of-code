#include <stdio.h>

int main() {
    int A[10][10];
    int n, i, j, sum = 0;

    // Input size of the square matrix
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum += A[i][i];
    }

    // Display result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
