// Q139: Show that enums store integers by printing assigned values.

#include <stdio.h>

enum stat { Success = 1, Failure = -1, Timeout = 0 };

int main() {
    enum stat r;
    int k;

    printf("Success = 1 | Failure = -1 | Timeout = 0\n");
    printf("Enter the status : ");
    scanf("%d", &k);

    if (k == Success) {
        printf("You entered Success (%d)\n", Success);
    } else if (k == Failure) {
        printf("You entered Failure (%d)\n", Failure);
    } else if (k == Timeout) {
        printf("You entered Timeout (%d)\n", Timeout);
    } else {
        printf("Invalid value!\n");
    }

    return 0;
}
