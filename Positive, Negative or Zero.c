//Write a program to test whether the number is positive, negative or zero.
#include<stdio.h>
int main(){
    int num;
    printf("\n Enter any number: ");
    scanf("%d",&num);
    if(num==0)
        printf("\n The numbr is equal to zero");
    else if(num>0)
        printf("\n The number is positive");
    else
        printf("\n The number is negative");
}