// Write a program to input time in seconds and convert it to hours:minutes:seconds format :

#include <stdio.h>

int main() {
    int seconds, hour, min;

    printf("Enter your time in seconds : ");
    scanf("%d",&seconds);

    hour = seconds / 3600;
    seconds = seconds % 3600;
    min = seconds / 60;
    seconds = seconds % 60;

    printf("Time in Hour Minute and Second format - \n");
    printf("%d : %d : %d",hour,min,seconds);

    return 0;
}
