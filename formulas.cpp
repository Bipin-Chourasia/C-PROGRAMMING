#include <stdio.h>
int main()
{
	float A,B,C;
	printf("ENTER THE VALUE OF A: ");
	scanf("%f",&A);
	printf("ENTER THE VALUE OF B: ");
	scanf("%f",&B);
	printf("ENTER THE VALUE OF C: ");
	scanf("%f",&C);
	printf("ANSWER OF S_1: ");
	printf("%f \n",(A*A)+(2*A*B)+(B*B));
	printf("ANSWER OF S_2: ");
	printf("%f \n",(A*A)-(2*A*B)-(B*B));
	printf("ANSWER OF S_3: ");
	printf("%f \n",(A*A)-(B*B));
	printf("ANSWER OF S_4: ");
	printf("%f \n",(A+B+C)*(A+B+C));
	printf("ANSWER OF S_5: "); 
	printf("%f \n",(A+B-C)*(A+B-C));
	printf("ANSWER OF S_6: ");
	printf("%f \n",(A-B+C)*(A-B+C));
	printf("ANSWER OF S_7: ");
	printf("%f \n",(-A+B+C)*(-A+B+C));
	printf("ANSWER OF S_8: ");
	printf("%f \n",(A-B-C)*(A-B-C));
	printf("ANSWER OF S_9: ");
	printf("%f \n",(A+B)*(A+B)*(A+B));
	printf("ANSWER OF S_10: ");
	printf("%f \n",(A-B)*(A-B)*(A-B));
	printf("ANSWER OF S_11: ");
	printf("%f \n",(A*A*A)+(B*B*B));
	printf("ANSWER OF S_12: ");
	printf("%f \n",(A*A*A)-(B*B*B));
	printf("ANSWER OF S_13: ");
	printf("%f \n",(A*A*A)+(B*B*B)+(C*C*C)-(3*A*B*C));
	return 0;
}



