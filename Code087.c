// Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char ch[100];
    int space=0,dig=0,spec=0;

    printf("Enter the string : ");
    fgets(ch , sizeof(ch) , stdin);

    for(int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == '\n')
            continue;
        else if (ch[i] == ' ')
            space++;
        else if (ch[i] >= '0' && ch[i] <= '9') 
            dig++;
        else if (!((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')))
            spec++;        
    }
    printf("No. of Spaces = %d \n", space);
    printf("No. of digits = %d \n", dig);
    printf("No. of special characters = %d \n", spec);
    return 0;
}