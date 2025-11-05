// Q84: Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char ch[100];
    int i;

    printf("Enter a string : ");
    fgets(ch , sizeof(ch) , stdin);

    for (i = 0; ch[i] != '\0'; i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ch[i] - 32;
        }
        else
            break;
    }
    printf("Uppercase version : %s", ch);
    return 0;
}