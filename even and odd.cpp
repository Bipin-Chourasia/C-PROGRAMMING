#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	int b=a%2;
	if (b==0)
	printf("The number is even");
	else
	printf("The number is odd");
}
