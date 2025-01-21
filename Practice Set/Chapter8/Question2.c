#include <stdio.h>
#include <string.h>

int main() {
    /* 2. Write a program to take string as an input from the user using %c and %s confirm 
    that the strings are equal. */
    char str1[100], str2[100];
    char ch;
    int i = 0;

    
    printf("Enter the first string (using %%s): ");
    scanf("%s", str1);

    // Clear the input buffer
    while ((ch = getchar()) != '\n' && ch != EOF);

    
    printf("Enter the second string (character by character, press Enter to finish): ");
    while ((ch = getchar()) != '\n') { //A while loop reads characters one by one using getchar() until a newline character (\n) is detected.
        str2[i++] = ch;
    }
    str2[i] = '\0';  //The string is manually null-terminated at the end 

    
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
