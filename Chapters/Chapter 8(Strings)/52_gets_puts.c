#include <stdio.h>

int main(){
    char st[100];
    gets(st); //to store multi-word strings in st
    //Currently gets is not used as it is depreceated by fgets due to its buffer overflow issues
    puts(st); //prints the string st and at starts new line after it 
    printf("hey");
    return 0;
}