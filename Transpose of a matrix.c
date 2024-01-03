#include<stdio.h>
void main()
{
    int a[3][2],b[2][3],i,j;
    printf("Enter value for matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            printf(" %d ",a[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            b[j][i]=a[i][j];
    }
    printf("Transpose matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf(" %d ",b[i][j]);
        printf("\n");
    }
}