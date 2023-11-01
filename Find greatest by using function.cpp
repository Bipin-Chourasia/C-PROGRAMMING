#include<stdio.h>
int findgreatest(int a, int b){
	if(a>b)
	return a;
	else
	return b;
}
int main(){
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	int greatest=findgreatest(a,b);
	printf("The greatest number is:%d\n");
	return 0;
}
