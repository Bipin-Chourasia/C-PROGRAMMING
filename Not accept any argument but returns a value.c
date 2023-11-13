// NOT ACCEPT ANY ARGUMENT BUT RETURNS A VALUE.
#include<stdio.h>
int add(){
	int a=10;
	int b=20;
	int c=a+b;
	return c;
}
int main(){
	int val=add();
	printf("%d",val);
}
