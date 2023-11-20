/* C Program to print hourglass pattern using alphabets
A B C D E F G H I
        A B C D E F G
A B C D E
        A B C
A
        A B C
A B C D E
        A B C D E F G
A B C D E F G H I
*/

#include <stdio.h>
int main()
{
    int rows = 5;
    for (int i = 0; i < 2 * rows - 1; i++) {
        int comp;
        if (i < rows) {
            comp = 2 * i + 1;
        }
        else {
            comp = 2 * (2 * rows - i) - 3;
        }
        for (int j = 0; j < comp; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * rows - comp; k++) {
            printf("%c ", k + 'A');
        }
        printf("\n");
    }
}