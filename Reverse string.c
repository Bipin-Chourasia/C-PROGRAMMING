#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

}