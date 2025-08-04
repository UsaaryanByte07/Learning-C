#include <stdio.h>

int main(){
    /* 1. Write a program to read integers from a file. */
    FILE *ptr;
    ptr = fopen("Question1.txt","r");
    if( ptr == NULL){
        printf("Error Occured!!");
    }else{
        int n;
        while(fscanf(ptr,"%d",&n) != EOF){
            printf("%d\t",n);
        }
    }
    fclose(ptr);
    return 0;
}