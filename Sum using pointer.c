#include<stdio.h>

int main(){
    int first, second,*p1,*p2,sum;
    printf("Enter two numbers:");
    scanf("%d %d",&first,&second);
    p1=&first;
    p2=&second;
    sum=*p1+*p2;
    printf("sum of the numbers=%d\n",sum);
    return 0;
}