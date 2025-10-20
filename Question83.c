#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);   // Note: unsafe, use fgets() in practice

    // Traverse each character
    while (str[i] != '\0') {
        char ch = str[i];

        // Convert to lowercase for easy comparison
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        // Check if alphabet
        if (ch >= 'a' && ch <= 'z') {
            // Check vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
