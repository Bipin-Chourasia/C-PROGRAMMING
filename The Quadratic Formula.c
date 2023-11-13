#include <stdio.h>

int main() {
    float d,b,a,c;
    printf("ENTER THE VALUE OF A\n");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF B\n");
    scanf("%f",&b);
    printf("ENTER THE VALUE OF C\n");
    scanf("%f",&c);
    d=b*b-4*a*c;
    printf("THE VALUE OF D IS: %f",d);
}
