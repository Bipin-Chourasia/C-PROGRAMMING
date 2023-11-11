#include<stdio.h>
int main(){
	int a,b,start;
	printf("Enter the starting point:");
	scanf("%d",&a);
	printf("Enter the ending point:");
	scanf("%d",&b);
	while(a<b){
		if(a%2==0){
			printf("%d is a even number\n",a);
		}
		a++;
	}
}
