#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("aryan64.txt","a+");
    while(1){
        char ch = fgetc(ptr);
        printf("%c\n",ch);
        if(ch == EOF){
            break; //EOF(End of file character ) is return by the fgetc when all the characters read
        }
    }
    fclose(ptr);
    return 0;
}