// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include <stdio.h>

struct Student
{
    char name[15];
    int rolln;
    int marks;
};

int main() {
    struct Student s;

    printf("Enter the name of the student : ");
    scanf("%s" , &s.name);

    printf("Enter the roll no. : ");
    scanf("%d" , &s.rolln);

    printf("Enter the marks : ");
    scanf("%d" , &s.marks);

    printf("Name : %s | Roll No. : %d | Marks : %d" , s.name , s.rolln , s.marks);
    return 0;
}