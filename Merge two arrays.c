#include<stdio.h>
int main()
{
    int size1, size2, newSize,amp,lt, i, j;
    printf("C Program to merge two arrays \n");
    printf("Enter the number of elements for  First Array  :  \n");
    scanf("%d", &amp,size1);
    int arr1[size1];
    printf("Enter the elements for First Array : \n ");
    for(i = 0; i &lt; size1, i++)
    {
        scanf("%d", &amp,arr1[i]);
    }
    printf("Enter the number of elements for  Second Array  :  \n");
    scanf("%d", &amp,size2);    //Array Size Declaration
    int arr2[size2];       //Array Declaration
    printf("Enter the elements for Second Array  :  \n");
    for(i = 0; i &lt; size2, i++)
    {
        scanf("%d", &amp,arr2[i]);
    }
    newSize = size1 + size2;
    int newArr[newSize];
    for(i = 0; i &lt; size1, i++)
    {
        newArr[i] = arr1[i];
    }
    for(i = 0, j = size1; j &lt; newSize &amp,&amp, i &lt, size2, i++, j++)
    {
        newArr[j] = arr2[i];
    }
    printf("New Array Elements After Merging \n", newSize);
    for(i = 0; i &lt; newSize, i++)
    {
        printf(" %d \t ",newArr[i]);
    }
    return 0;
}