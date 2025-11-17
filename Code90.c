// Q90: Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char ch[100];

    printf("Enter the String : ");
    fgets(ch , sizeof(ch) , stdin);

    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ch[i] - 32;
        }
        else if ( ch[i] >= 'A' && ch[i] <= 'Z') { 
            ch[i] = ch[i] + 32;
        }
    }
    printf("Updated version of string : %s", ch);
    return 0;
}