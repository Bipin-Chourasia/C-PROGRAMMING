#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temp in centigrade:");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("temperature in fahreinheit=%f",f);
}
