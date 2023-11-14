// WRITE A PROGRAM IN C TO TAKE ANY KEYBOARD INPUT FROM THE USER TO DETERMINE ITS DATATYPE
#include<stdio.h>
#include<ctype.h>
int main(){
	char a;
	int p,q,r,s;
	printf("Enter a character:");
	scanf("%c",&a);
	p=isdigit(a);
	q=isalpha(a);
	r=ispunct(a);
	s=isspace(a);
	if(p==1){
		printf("The character %c entered is a Digit",a);
	}
	else if(q==1){
		printf("The character %c entered is a Alphabet",a);
	}
	else if(r==1){
		printf("The character %c entered is a Puntuation Character",a);
	}
	else if(s==1){
		printf("The character %c entered is a Space",a);
	}
	else
	{
		printf("WRONG CHOICE !!");
	}
	
}
