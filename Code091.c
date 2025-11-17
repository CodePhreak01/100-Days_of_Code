// Q91: Remove all vowels from a string.

#include <stdio.h>

int main() {
    char ch[100];
    int i, j = 0;

    printf("Enter the string : ");
    fgets(ch , sizeof(ch) , stdin);

    for (i = 0; ch[i] != '\0'; i++) {
        if (ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' && ch[i] != 'u' &&
            ch[i] != 'A' && ch[i] != 'E' && ch[i] != 'I' && ch[i] != 'O' && ch[i] != 'U') {
            ch[j++] = ch[i];
        }
    }
    ch[j] = '\0';

    printf("Updated String : %s", ch);
    return 0;
}