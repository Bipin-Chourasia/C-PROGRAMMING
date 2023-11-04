//WRITE A PROGRAM IN C TO CHECK THE YEAR IS LEAP YEAR OR NOT USING FUNCTION.
#include<stdio.h>
int isleapyear(int year){
	if((year%4==0 && year%100!=0)|| (year%400==0))
	{
	return 0;
   }
}
int main(){
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	if (isleapyear(year)){
		printf("%d is not a leap year\n",year);
	}else{
		printf("%d is a leap year\n",year);
	}
}
	

