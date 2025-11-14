// Q88: Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char ch[100];

    printf("Enter the string : ");
    fgets(ch , sizeof(ch) , stdin);

    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == ' ')
            ch[i] = '-';                 
    }
    printf("Updated String : %s", ch);

    return 0;
}