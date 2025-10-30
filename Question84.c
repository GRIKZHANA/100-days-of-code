#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a lowercase string: ");
    scanf("%s", str); // Reads a single word (no spaces)

    // Convert to uppercase manually
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // ASCII difference between lowercase and uppercase
        }
    }

    // Output result
    printf("Uppercase string: %s\n", str);

    return 0;
}
