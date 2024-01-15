//Write a program to show the effect of global variables on different functions.
#include<stdio.h>
int b=10, c=5;
int main() {
    printf("In main() B=%d c=%d", b, c);
    fun();
    b++;
    c--;
    printf("Again In main() B=%d c=%d", b, c);
}
fun()
{
    b++;
    c--;
    printf("In fun() B=%d c=%d",b,c);
}