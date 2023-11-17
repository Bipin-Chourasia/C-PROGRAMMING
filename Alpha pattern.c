//Printing pattern using alphabets
#include<stdio.h>
int main()
{
    int i=1,j,sp,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n");
        sp=1;
        while(sp<=(n-i))
        {
            printf(" ");
            sp++;
        }
        j=1;
        char ch='A';
        while(j<=i && (int)ch>=65)
        {
            printf("%c",ch);
            j++;
            ch++;
        }
        i++;
    }
    return 0;
}
