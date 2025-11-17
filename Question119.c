#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // To mark visited elements
    int visited[100000] = {0};  // assuming values are small or reasonable

    // One-pass to find repeated element
    int repeated = -1;
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            repeated = arr[i];
            break;
        }
        visited[arr[i]] = 1;
    }

    printf("Repeated element is: %d\n", repeated);

    return 0;
}
