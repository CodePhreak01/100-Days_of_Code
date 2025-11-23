// Q100: Print all sub-strings of a string.

#include <stdio.h>

int main() {
    char ch[100];
    int i, j, k;

    printf("Enter the string: ");
    fgets(ch, sizeof(ch), stdin);

    for (i = 0; ch[i] != '\0' && ch[i] != '\n'; i++) {
        for (j = i; ch[j] != '\0' && ch[j] != '\n'; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", ch[k]);
            }
        }
    }

    return 0;
}
