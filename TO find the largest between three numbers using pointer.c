// Write a program in c to find largest between three numbers using pointers.
#include <stdio.h>

void findLargest(int *num1, int *num2, int *num3) {
    int *max = num1;


    if (*num2 > *max) {
        max = num2;
    }

    if (*num3 > *max) {
        max = num3;
    }

    printf("The largest number is: %d\n", *max);
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    findLargest(&num1, &num2, &num3);

    return 0;
}
