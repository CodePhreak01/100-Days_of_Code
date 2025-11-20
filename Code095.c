// Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2)
        return 0;

    char temp[2 * len1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);

    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);

    if (isRotation(s1, s2))
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
