// Q93: Check if two strings are anagrams of each other

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};

    printf("Enter the first word: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second word: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            count1[str1[i] - 'A']++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            count2[str2[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("\nResult : The words are not anagrams.");
            return 0;
        }
    }

    printf("Result: The words are anagrams!");
    return 0;
}
