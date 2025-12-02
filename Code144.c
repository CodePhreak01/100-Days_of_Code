// Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct student
{
    char name[15];
    int rolln;
    int marks;
};

void fun(struct student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.rolln, s.marks);
}

int main() {
    struct student s;

    printf("Enter the Name : ");
    scanf("%s", s.name);

    printf("Enter Roll No. : ");
    scanf("%d", &s.rolln);

    printf("Enter the marks : ");
    scanf("%d", &s.marks);

    fun(s);

    return 0;
}
