// Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender {Male , Female};

struct person {
    enum Gender gender;
};

int main() {
    struct person p;
    char k[10];
    
    printf("Enter the Gender : ");
    scanf("%9s" , &k);

    if (strcmp(k , "Male") == 0) {
        p.gender = Male;
    }
    else if (strcmp(k , "Female") == 0) {
        p.gender = Female;
    }
    else {
        printf("Invalid input");
        return 1;
    }

    if (p.gender == Male) {
        printf("Gender = Male");
    }
    else 
        printf("Gender = Female");

    return 0;
}