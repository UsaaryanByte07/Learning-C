#include <stdio.h>
#include <stdbool.h>

int main(){
    /* 3. Write a program to read a text file character by character and write its content twice in separate file. */

    FILE *ptr1,*ptr2;
    ptr1 = fopen("Question3(1).txt","r");
    ptr2 = fopen("Question3(2).text","w+");
    if(ptr1 == NULL && ptr2 == NULL){
        printf("Error Occured!!");
    }else{
        while(true){
            char ch = fgetc(ptr1);
            if(ch == EOF){
                break;
            }
            fputc(ch,ptr2);
            fputc(ch,ptr2);
        }
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}