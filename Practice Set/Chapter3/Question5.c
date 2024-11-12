#include <stdio.h>

int main(){
    /* 5. Write a program to determine whether a character entered by the user is 
    lowercase or not. */

    char ch;

    // Ask the user for a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is lowercase
    if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is lowercase.\n", ch);
    } else {
        printf("The character '%c' is not lowercase.\n", ch);
    }

    return 0;
}