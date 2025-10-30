#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, length = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str); // Reads a single word (no spaces)

    // Find string length manually
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0'; // Null-terminate the reversed string

    // Output the reversed string
    printf("Reversed string: %s\n", rev);

    return 0;
}
