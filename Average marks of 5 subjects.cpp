//Write a program in c to input 5 subject from class 12 and calculate the average of the grades,
#include<stdio.h>
int main()
{
int m,e,h,p,c;
float a,avg;
printf("Enter Maths Marks:\n");
scanf("%d",&m);
printf("Enter English Marks:\n");
scanf("%d",&e);
printf("Enter Hindi Marks:\n");
scanf("%d",&h);
printf("Enter Physics Marks:\n");
scanf("%d",&p);
printf("Enter Chemistry Marks:\n");
scanf("%d",&c);
a=m+e+h+p+c;
avg=a/5;
printf("Average of all the marks is:%f\n",avg);
}

