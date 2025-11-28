// Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s
// name and age as input, and write them to the file using fprintf(). After writing, display a message confirming
// that the data was successfully saved.

#include <stdio.h>

int main() {
    FILE *ptr;
    int age;
    char name[15];
    
    printf("Enter your name : ");
    scanf("%s", name);

    printf("Enter the age : ");
    scanf("%d", &age);

    ptr = fopen("info.txt", "w");

    if (ptr == NULL) {
        printf("Error! Could not create the file.\n");
        return 1;
    }

    fprintf(ptr, "Name : %s\n", name);
    fprintf(ptr, "Age  : %d\n", age);
    
    fclose(ptr);

    printf("Data has been successfully saved to info.txt\n");

    fclose(ptr);
    return 0;
}
