#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);   // Note: 'gets()' is unsafe; use 'fgets()' in practice

    // Print each character on a new line
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
