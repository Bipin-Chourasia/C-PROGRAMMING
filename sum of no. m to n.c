#include<stdio.h>
int main(){
    int n,m,sum=0;
    printf("Enter the starting value:\n");
    scanf("%d",&m);
    printf("Enter the ending valuen:\n");
    scanf("%d",&n);
    while(m<=n)
    {
        sum=sum+m;
        m=m+1;
    }
        printf("The sum is %d", sum);
    return 0;

}
