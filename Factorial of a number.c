// Write a program in c to find out the factorial of a number.
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The factorial is=%d",fact);
    return 0;
}