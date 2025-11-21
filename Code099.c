// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    int d, month, y;

    printf("Enter the date : ");
    scanf("%d/%d/%d", &d, &month, &y);

    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("%02d-%s-%d", d, months[month - 1], y);

    return 0;
}
