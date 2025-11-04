//Q82: Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char ch[100];
    int i = 0;

    printf("Enter the word: ");
    scanf("%s", ch);

    while (ch[i] != '\0') {
        printf("%c \n", ch[i]);
        i++;
    }
    return 0;
}
