#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Diagonal elements: ");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == j)   // Condition for main diagonal
                printf("%d ", matrix[i][j]);
        }
    }

    return 0;
}
