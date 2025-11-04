#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSoFar = arr[0];
    int currentSum = arr[0];

    // Kadane's Algorithm
    for (int i = 1; i < n; i++) {
        if (currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        if (currentSum > maxSoFar)
            maxSoFar = currentSum;
    }

    printf("Maximum subarray sum = %d\n", maxSoFar);
    return 0;
}
