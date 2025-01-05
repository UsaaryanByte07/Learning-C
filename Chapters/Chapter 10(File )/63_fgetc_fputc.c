#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("aryan63.txt","a+");
    fputc('c',ptr);
    fputc('d',ptr);

    rewind(ptr); //Set  the file pointer to the beginning of file 
    
    char ch1 = fgetc(ptr);
    char ch2 = fgetc(ptr);
    printf("%c %c",ch1,ch2);
    fclose(ptr);
    return 0;
}