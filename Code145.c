// Q145: Return a structure containing top student's details from a function. 

#include <stdio.h>
struct student
{
    char name[15];
    int rolln;
    int marks;
};

int main() {    
    int n,i;
    int max = 0,maxroll = 0;
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
            maxroll = s[i].rolln;
            top = i;
        }
    }   
    printf("Topper : %s\tRoll No. : %d\tMarks : %d" , s[top].name , maxroll , max);
    return 0;
}