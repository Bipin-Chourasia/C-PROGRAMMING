#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
void main() {
    int row, column, y;
    row = 1;
    printf("MULTIPLICATION TABLE");
    printf("__________________________");
    do {
            column = 1;
            do {
                    y = row * column;
                    printf("%d\n", y);
                    column = column + 1;
                }
                while (column <= COLMAX);
                printf("\n");
                row = row + 1;
            } while (row <= ROWMAX);
            printf("___________________________________");
        }
