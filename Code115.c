// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to
// determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
// Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count1[26] = {0}, count2[26] = {0};

    printf("Enter the first word: ");
    scanf("%s" , s);

    printf("Enter the second word: ");
    scanf("%s" , t);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            count1[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        if (t[i] >= 'a' && t[i] <= 'z')
            count2[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}

