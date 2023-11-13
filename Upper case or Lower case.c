#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character:\n");
	scanf("%c",&c);
	if(c>65 && c<96)
	{
		printf("The character is in Upper Case");
	 } 
 else{
 	printf("The character is in Lower Case");
 }
}
