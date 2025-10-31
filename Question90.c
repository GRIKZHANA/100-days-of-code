#include <stdio.h>
#include <ctype.h>  // for islower(), isupper(), tolower(), toupper()

int main() {
    char str[200];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer input

    // Toggle case
    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }

    // Output result
    printf("Toggled string: %s", str);

    return 0;
}
