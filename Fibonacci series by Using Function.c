#include<stdio.h>

void generateFibonacci(int n);

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    generateFibonacci(n);

    return 0;
}

void generateFibonacci(int n) {
    int i, a = 0, b = 1, nextTerm;

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d, ", a);
            continue;
        }
        if (i == 2) {
            printf("%d, ", b);
            continue;
        }
        nextTerm = a + b;
        a = b;
        b = nextTerm;

        if (i == n) {
            printf("%d\n", nextTerm);
        } else {
            printf("%d, ", nextTerm);
        }
    }
}
