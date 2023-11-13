#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d",&marks);
	if(marks>95 && marks<=100){
	printf("AA");
}
	else if(marks>85 && marks<=95){
	printf("A+");
}
   else if(marks>75 && marks<=85){
   printf("A");
}
   else if(marks>65 && marks<=75){
   	printf("B");
   }
   else if(marks>55 && marks<=65){
   	printf("C");
   }
   else if(marks>45 && marks<=55){
   	printf("D");
   }
   else{
   	printf("F");
   }
}
