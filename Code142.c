// Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>
struct student
{
    char name[15];
    int rolln;
    int marks;
};

int main() {    
    int n;
    printf("Enter the no. of students : ");
    scanf("%d" , &n);

    struct student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the Name : ");
        scanf("%s" ,  &s[i].name);

        printf("Enter Roll No. : ");
        scanf("%d" , &s[i].rolln);

        printf("Enter the marks : ");
        scanf("%d" , &s[i].marks);
    }
    printf("Roll No. Name \tMarks \n");

    for (int i = 0; i < n; i++) {
        printf("%d\t %s\t %d \n" , s[i].rolln , s[i].name , s[i].marks);
    }   
    return 0;
} 