#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int count[26] = {0};
    int i;

    // Input strings
    scanf("%s", s);
    scanf("%s", t);

    // If lengths differ, not an anagram
    if(strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    // Count characters of s
    for(i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Subtract character counts using t
    for(i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for(i = 0; i < 26; i++) {
        if(count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
