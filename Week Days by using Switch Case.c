// Write a program in c to take the input from the user to print the week days by switch case.
#include<stdio.h>
int main(){
	int day;
	printf("Enter the number from 1 to 7:\n");
	scanf("%d",&day);
	switch(day)
	{
	case 1: printf("\nSUNDAY");
	break;
	case 2: printf("\nMONDAY");
	break;
	case 3: printf("\nTUESDAY");
	break; 
	case 4: printf("\nWEDNESDAY");
	break;
	case 5: printf("\nTHURSDAY");
	break;
	case 6: printf("\nFRIDAY");
	break;
	case 7: printf("\nSATURDAY");
	break;
	default: printf("\n YOU HAVE ENTERED WRONG NUMBER");
}
 return 0;
}
