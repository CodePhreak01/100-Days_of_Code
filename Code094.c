// Q94: Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[100], word[100], longest[100];
    int i = 0, j = 0, len = 0, max = 0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            word[j++] = str[i];
            len++;
        } else {
            if (len > 0) {
                word[j] = '\0';
                if (len > max) {
                    max = len;
                    int k = 0;
                    while (word[k] != '\0') {
                        longest[k] = word[k];
                        k++;
                    }
                    longest[k] = '\0';
                }
                j = 0;
                len = 0;
            }
        }
        i++;
    }

    if (len > 0 && len > max) {
        word[j] = '\0';
        int k = 0;
        while (word[k] != '\0') {
            longest[k] = word[k];
            k++;
        }
        longest[k] = '\0';
    }

    printf("Longest word : %s", longest);
    return 0;
}

