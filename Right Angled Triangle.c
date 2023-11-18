// WAP IN C TO PRINT HOLLOW RIGHT ANGLED TRIANGLE


#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(j==1||i==5||i==j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}