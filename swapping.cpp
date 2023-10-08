#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:\n");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping the value of a and b:%d %d",a,b);
}

