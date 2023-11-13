#include<stdio.h>
int factorial(int n);
int main(){
    int n;
    printf("Enter integer:");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid\n");
    }
    else{
        int result=factorial(n);
        printf("Factorial is %d\n",result);
    }
}
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n* factorial(n-1) ;
        factorial(n);
}
// Created by bipin on 14-11-2023.
//
