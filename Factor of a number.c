#include<stdio.h>
int main(){
	int a,i;
	printf("Enter the number whose you want to see the factor:\n");
	scanf("%d",&a);
	printf("The factor of a given number is %d\n",i);
	for(i=1;i<=a;++i)
	    if(a%i==0)
	printf("%d\n",i);
	return 0;
}
