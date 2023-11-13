#include<stdio.h>
int main()
{
	int limit;
	int temp=1;
	printf("Enter the limit\n");
	scanf("%d",&limit);
    for(int i=limit;i>=1;i--){
	for(int j=i;j>=1;j--){
	printf(" ");
	}
	for(int k=1;k<=temp;k++){
	printf("* ");
}
    temp++;
    printf("\n");
}
}

