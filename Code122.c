// Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
// The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch[100];

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("File not exist !");
        exit(1);
    }

    while (fgets(ch, 100, fp) != NULL)
        printf("%s", ch);
   
    printf("\n");

    fclose(fp);    
    return 0;
}