// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char ch[100];
    int i,endc;

    printf("Enter the name : ");
    fgets(ch , 100 , stdin);

    for (i = 0; ch[i] != '\0'; i++) {
        if (i == 0)
            printf("%c." , ch[i]);
        else if (ch[i] == ' ') 
            printf("%c." , ch[i+1]);

    }
    return 0;
}