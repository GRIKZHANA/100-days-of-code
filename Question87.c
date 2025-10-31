#include <stdio.h>
#include <ctype.h>  // for isdigit(), isspace(), isalpha()

int main() {
    char str[200];
    int i, spaces = 0, digits = 0, special = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Loop through each character
    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            spaces++;
        } 
        else if (isdigit(str[i])) {
            digits++;
        } 
        else if (!isalpha(str[i]) && !isspace(str[i]) && !isdigit(str[i])) {
            special++;
        }
    }

    // Output results
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
