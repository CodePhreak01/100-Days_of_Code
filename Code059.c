// Count even and odd numbers in an array :

#include <stdio.h>

int main() {
    int num,i;
    int even = 0,odd = 0;

    printf("Enter no. of elements : ");
    scanf("%d" , &num);
    int arr[num];
    
    printf("Enter %d elements : \n" , num);
    for (i = 0; i < num; i++) {
        scanf("%d" , &arr[i]);
    }
    for (i = 0; i < num; i++) {
        if (arr[i]%2 == 0)
        even++;
    }
    odd = num - even;
    printf("Even = %d ," , even);
    printf(" Odd = %d", odd);
    return 0;
}