// Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char ch[100];

    printf("Enter the string in lowercase : ");
    scanf("%s" , &ch);
    
    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            for (int j = i+1; ch[j] != '\0'; j++) {
                if (ch[j] == ch[i]) {
                    printf("First repeating letter : %c", ch[i]);
                    return 0;
                }
            }
        }
    }
    printf("No repeating letters found.");
    return 0;
}