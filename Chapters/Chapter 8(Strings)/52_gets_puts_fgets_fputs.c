#include <stdio.h>

int main(){
    char st[100];
    char st1[20];
    //gets(st); //to store multi-word strings in st
    //Currently gets is not used as it is depreceated by fgets due to its buffer overflow issues
    fgets(st,sizeof(st),stdin);
    fgets(st1,sizeof(st1),stdin);
    puts(st); //prints the string st and then starts new line after it 
    fputs(st1,stdout); // prints string, no newline added
    printf("hey");
    return 0;
}