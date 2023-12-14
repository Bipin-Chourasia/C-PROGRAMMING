#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    // Input dimensions of the first matrix
    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &r1);
    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &c1);

    // Input dimensions of the second matrix
    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &r2);
    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &c2);

    // Check if matrices can be multiplied
    if (c1 != r2)
    {
        printf("Matrices cannot be multiplied. Invalid dimensions.\n");
        return 0;
    }

    int a[100][100], b[100][100], product[100][100];

    // Input elements of the first matrix
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            printf("Enter element a%d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            printf("Enter element b%d%d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            product[i][j] = 0;
            for (int k = 0; k < c1; ++k)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Product of two matrices:\n");
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            printf("%d   ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}