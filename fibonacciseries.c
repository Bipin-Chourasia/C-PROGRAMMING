#include<stdio.h>
int main()
{
	int a,b,n,c,i;
	a=1;
	b=1;
	printf("enter the range");
	scanf("%d",&n);	
	printf("%d\t%d",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
			
	}
	return 0;
}
