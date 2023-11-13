#include<stdio.h>
int main(){
    int n,sum(n);
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of numbers till %d is %d\n",n,sum(n));
}
int sum(int n){
    if(n==0)
        return 0;
    else
        return n+ sum(n-1);
}
// Created by bipin on 14-11-2023.
//
