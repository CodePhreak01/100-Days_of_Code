// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

enum light {Red , Yellow , Green};

int main() {
    enum light c;
    int k;

    char *color[] = {"Stop" , "Wait" , "Go"};
    
    printf("Enter the  traffic light colour : ");
    scanf("%d" , k);

    for (c = Red; c <= Green; c++) {
        if (c == k) {
            printf("%s" , color[c]);
        }
    }
    
    return 0;
}