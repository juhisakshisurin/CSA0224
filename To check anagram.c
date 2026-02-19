#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};

    // Input strings
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // If lengths are different, not anagram
    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    // Count frequency of characters
    for (int i = 0; str1[i] != '\0'; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // Compare frequencies
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");

    return 0;
}
