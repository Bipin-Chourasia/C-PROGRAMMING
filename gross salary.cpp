#include<stdio.h>
int main()
{
	float basic,gross,da,hra,med;
	med=300;
	printf("enter your basic salary :\n");
	scanf("%f",&basic);
	if (basic>21600){
	da=(basic*15)/100;
	printf("the da will be %f\n ", da);
}
	else
	{
	da=(basic*10)/100;
	printf("the da will be %f\n", da);
}
	hra=basic*0.1;
	printf ("hra will be %f\n",hra);
	printf ("medical will be 300\n");
	gross= basic+med+da+hra;
	printf("gross salary will be %f+%f+%f+%f=%f",basic,med,da,hra,gross);
}
