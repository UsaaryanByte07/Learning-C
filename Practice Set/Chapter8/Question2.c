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
    /* When you use scanf("%s", str1); and press Enter after your input, the newline character (\n) remains in the input buffer.
       The next getchar() call reads this leftover newline, not a new character from the user.
       This way the newline character leftover by scanf gets clear so that it doesn't cause problem when we take input for second string. */
    /* getchar() returns EOF if there is no more input (for example, if the input stream is closed).
       The loop stops if either a newline ('\n') or EOF is encountere */
    while (ch != '\n' && ch != EOF){
        ch = getchar();
    }

    
    printf("Enter the second string (character by character, press Enter to finish): ");
    //A while loop reads characters one by one using getchar() until a newline character (\n) is detected.
    while (ch != '\n') {
        ch = getchar();
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
