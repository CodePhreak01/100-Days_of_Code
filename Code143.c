// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>
struct student
{
    char name[15];
    int rolln;
    int marks;
};

int main() {    
    int n,i;
    int max = 0;
    int top = 0;

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

    for (i = 0; i < n; i++) {
        if (s[i].marks >= max) {
            max = s[i].marks;
            top = i;
        }
    }   
    printf("Topper : %s\nMarks : %d" , s[top].name , max);
    return 0;
}