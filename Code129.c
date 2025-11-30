// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum
// and average, and print both.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int ch;
    int sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("file does not exist");
        exit(1);
    }

    while (fscanf(fp, "%d", &ch) == 1) {
        count++;
        sum += ch;
    }

    if (count == 0) {
        printf("No numbers present !");
        fclose(fp);
        return 0;
    }

    avg = (float)sum / count;

    printf("Sum of integers : %d\n", sum);
    printf("Average of integers : %.2f", avg);

    fclose(fp);
    return 0;
}
