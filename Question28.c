#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long to avoid overflow for bigger n
    
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        product *= i;
    }

    if (n < 2)
        printf("No even numbers in range 1 to %d\n", n);
    else
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
