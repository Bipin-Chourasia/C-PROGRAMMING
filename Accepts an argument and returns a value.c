//ACCEPTS AN ARGUMENT AND RETURNS A VALUE.
#include<stdio.h>
int add(int a,int b){
	int c=a+b;
	return c;
}
int main(){
	int a=0, b=0;
	printf("Enter the value of A and B:\n");
	scanf("%d %d", &a,&b);
	int val=add(a,b);
	printf("%d", val);
}
