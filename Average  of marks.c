#include<stdio.h>
int main()
{
	int Hindi, English, Maths, Physics, Chemistry,avg;
	printf("Enter your Hindi marks:");
	scanf("%d",&Hindi);
	printf("Enter your Enlish marks:");
	scanf("%d",&English);
	printf("Enter your Maths marks:");
	scanf("%d",&Maths);
	printf("Enter your Physics marks:");
	scanf("%d",&Physics);
	printf("Enter your Chemistry marks:");
	scanf("%d",&Chemistry);
	avg=(Hindi+English+Maths+Physics+Chemistry)/5;
	printf("The average is:%d\n",avg);
	if(avg>95 && avg<=100){
	printf("AA");
}
	else if(avg>85 && avg<=95){
	printf("A+");
}
   else if(avg>75 && avg<=85){
   printf("A");
}
   else if(avg>65 && avg<=75){
   	printf("B");
   }
   else if(avg>55 && avg<=65){
   	printf("C");
   }
   else if(avg>45 && avg<=55){
   	printf("D");
   }
   else{
   	printf("F");
   }
   
}
