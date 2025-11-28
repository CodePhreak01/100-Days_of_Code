// Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>

int main() {
    char ch[100];

    printf("Enter the string : ");
    fgets(ch , sizeof(ch) , stdin);

    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == ' ') {
            if (ch[i+1] >= 'a' && ch[i+1] <= 'z') {
            ch[i+1] = ch[i+1] - 32;
            }
        }
    }

    printf("updated version of the string - %s", ch);

    return 0;
}