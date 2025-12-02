// Q146: Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

struct employee
{
    char name;
    int id;
    struct date jdate;    
};

int main() {
    int n,i;

    printf("Enter the no. of employees : ");
    scanf("%d" , &n);

    struct employee e[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the Name : ");
        scanf("%s" ,  &e[i].name);

        printf("Enter employee ID : ");
        scanf("%d" , &e[i].id);

        printf("Enter the Joining Date : ");
        scanf("%d %d %d" , &e->jdate.day , &e->jdate.month , &e->jdate.year);
    }

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d" , 
            e->name , e->id , e->jdate.day , e->jdate.month , e->jdate.year);

    return 0;
}