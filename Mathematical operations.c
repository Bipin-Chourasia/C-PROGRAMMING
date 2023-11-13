#include <stdio.h>
void operation(int a, int b);

int main() {
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    operation(a,b);
    return 0;
}
void operation(int a, int b ) {
    int sum = a+b;
    int difference = a-b;
    int product = a * b;
    int quotient = a / b;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
}
