#include <stdio.h>

int main(){
    char st[100];
    printf("Enter the string: ");
    scanf("%s",st);
    printf("The String Entered by you is %s\n",st);
    //multi-word strings or spaces or newlines can be inputted by this method 
    return 0;
}