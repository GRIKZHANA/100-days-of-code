#include <stdio.h>

int main() {
    char str[200];
    int i;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Replace spaces with hyphens
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    // Output the modified string
    printf("Modified string: %s", str);

    return 0;
}
