// Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>

enum day {Sun , Mon , Tue , Wed , Thurs , Fri , Sat};

int main() {
    enum day d;

    char *days[] = {"Sunday" , "Monday" , "Tuesday" , "Wednesday" , "Thursday" ,"Friday" , "Saturday"};
    
    for (d = Sun; d <= Sat; d++) {
        printf("%s = %d\n", days[d] , d);
    }
    
    return 0;
}