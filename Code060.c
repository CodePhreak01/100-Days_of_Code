// Count positive, negative, and zero elements in an array :

#include <stdio.h>

int main() {
    int num,i;
    int positive=0,negative=0,zero=0;

    printf("Enter no. of elements : ");
    scanf("%d" , &num);
    int arr[num];

    printf("Enter %d elements : \n", num);
    for (i = 0; i < num; i++) {
        scanf("%d" , &arr[i]);
    }
    for (i = 0; i < num; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }
    printf("Positive = %d ",positive);
    printf(" , Negative = %d ",negative);
    printf(" , Zero = %d ",zero);

    return 0;
}