// Write a program in c to find out the factorial of a number by using function.
#include<stdio.h>
int factorial(int num){
int product=1;	
while(num>0){
	product=product*num;
	num--;
}
}
int main(){
	int num;
	printf("enter the number whose factorial is to be calculated:\n");
	scanf("%d",&num);
	printf("The factorial of the above number is %d",factorial(num));
	return 0;
}


