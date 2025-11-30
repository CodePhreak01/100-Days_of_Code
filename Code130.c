// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them
// using fscanf() and display each record.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main() {
    FILE *fp;
    char another = 'y';

    struct student {
        char name[50];
        int rolln;
        int marks;
    } st;

    fp = fopen("record.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file!");
        exit(1);
    }

    while (another == 'y') {
        printf("Name: ");
        fflush(stdin);
        fgets(st.name, sizeof(st.name), stdin);
        st.name[strcspn(st.name, "\n")] = '\0';

        printf("Roll number: ");
        scanf("%d", &st.rolln);

        printf("Marks: ");
        scanf("%d", &st.marks);

        fprintf(fp, "%s\n%d\n%d\n", st.name, st.rolln, st.marks);

        printf("Add another (y/n): ");
        fflush(stdin);
        another = getche();
        printf("\n");
    }

    fclose(fp);

    fp = fopen("record.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file!");
        exit(1);
    }

    printf("\n--Student Details--\n");
    printf("Name\t\tRoll\tMarks\n");

    while (fgets(st.name, sizeof(st.name), fp)) {
        st.name[strcspn(st.name, "\n")] = '\0';  
        fscanf(fp, "%d", &st.rolln);
        fscanf(fp, "%d", &st.marks);
        fgetc(fp); 

        printf("%s\t\t%d\t%d\n", st.name, st.rolln, st.marks);
    }

    fclose(fp);
    return 0;
}
