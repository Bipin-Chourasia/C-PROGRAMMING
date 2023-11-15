//Sum of the cubes upto n number. 'n' to be specified by user

#include<stdio.h>
int main()
{
    int rng,i=1,sm=0,cube;
    printf("Enter range to calculate cube: ");
    scanf("%d",&rng);
    while(i<=rng)
    {
        cube= (i*i*i);
        sm+=cube;
        i++;
    }
    printf("The sum of the cube is: %d",sm);
    return 0;
}