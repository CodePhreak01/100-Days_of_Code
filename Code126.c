// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is
// NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *as;
    char ch[100];

    printf("Enter the filename (with compplete format): ");
    scanf("%s" , &ch);

    as = fopen(ch , "r");

    if (as == NULL) {
        printf("..-. .. .-.. .   -.. --- . ...   -. --- -   . -..- .. ... - ");
        exit(1);
    }
    while (fgets(ch, 100, as) != NULL) {
        printf("%s" , ch);
    }
    printf("File opened successfully. \n");

    fclose(as);
    return 0;
}