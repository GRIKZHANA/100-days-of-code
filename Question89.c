#include <stdio.h>

int main() {
    char str[200], ch;
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Input character to count
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    // Count occurrences
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Display result
    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
