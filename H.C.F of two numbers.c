#include<stdio.h>
int main(){
	int a,b, minimum, hcf=1;
	printf("Enter two numbers whose you want to calculate H.C.F:\n");
	scanf("%d %d",&a,&b);
	
	minimum=(a<b)? a:b;
	
	for(int i=1; i<=minimum;i++)
	{
    	if(a%i==0 && b%i==0)
	 {
		hcf=i;
	 }
	} 
	
   printf("HCF of %d and %d=%d\n",a,b,hcf);
   
   return 0;
}
