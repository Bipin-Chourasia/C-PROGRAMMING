//Write a program in c to print the sum of first twenty odd natural number using function.
#include <stdio.h>
int sum(int n)
{
    int sum=0;
    for (int i = 1; i <= n; i+=2)
    {
        sum = sum + i;
    }
    printf("The sum=%d",sum);
}
int main()
{
    int n=40;
    sum(n);
}
