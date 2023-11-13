#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,d;
	printf("Enter the values of A and B :\n");
	scanf("%d %d", &a,&b);
	int q= a/b;
	int r=a%b;
	c=a;
	a=q;
	q=c;
	d=b;
	b=r;
	r=d;
	printf("%d=a , %d=b",a,b);
}
