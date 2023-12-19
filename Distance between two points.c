//Distance btw two points

#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,dis;
    printf("Enter value of x1: ");
    scanf("%f",&x1);
    printf("Enter value of x2: ");
    scanf("%f",&x2);
    printf("Enter value of y1: ");
    scanf("%f",&y1);
    printf("Enter val of y2: ");
    scanf("%f",&y2);
    dis= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("Distance: %f",dis);
    return 0;
}