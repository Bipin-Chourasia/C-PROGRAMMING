#include <stdio.h>
#include <string.h>

int main() {
    // Input the name
    char fullName[100];
    printf("Enter the full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove the newline character from the input
    fullName[strcspn(fullName, "\n")] = '\0';

    // Find the position of the first space in the name
    char *spacePos = strchr(fullName, ' ');

    // Check if space exists in the name
    if (spacePos != NULL) {
        // Replace the first character after the space with a dot
        *(spacePos + 1) = '.';

        // Print the abbreviated name
        printf("Abbreviated Name: %c.%s\n", fullName[0], spacePos + 1);
    } else {
        // If no space is found, print the entire name as is
        printf("Abbreviated Name: %s\n", fullName);
    }

    return 0;
}