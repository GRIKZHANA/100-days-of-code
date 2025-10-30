#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str); // Reads a single word (no spaces)

    // Find string length
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1; // Not a palindrome
            break;
        }
    }

    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
