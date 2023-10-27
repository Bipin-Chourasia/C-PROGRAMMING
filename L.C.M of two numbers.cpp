#include<stdio.h>
int main()
{
	int a,b,maximum;
	printf("Enter two numbers whose you want to calculate L.C.M:\n");
	scanf("%d %d",&a,&b);
	maximum=(a>b)? a:b;
	while(1){
	if((maximum%a==0)&& (maximum%b==0)){
		printf("The LCM of %d and %d is=%d\n",a,b,maximum);
		break;
	}
	++maximum;
}
	return 0;
}
