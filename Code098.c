// Q98: Print initials of a name with the surname displayed in full.

// Input = Arpan Pandey
// Output = A. Pandey

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);  
    
    char *word = strtok(name, " \n");
    char *lastWord = NULL;
    char *words[20];
    int count = 0;

    while (word != NULL) {
        words[count++] = word;
        word = strtok(NULL, " \n");
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%c. ", words[i][0]);
    }

    printf("%s\n", words[count - 1]);

    return 0;
}
