#include<stdio.h>
void swap(int a, int b){
	int c=a;
	a=b;
	b=c;
}
	int main(){
	int num1,num2;
	printf("Enter two numbers:\n");
	scanf("%d %d",&num1 ,&num2);
	swap(num1,num2);
	printf("The swapped numbers are: %d %d\n",num2, num1);
	return 0;
}
