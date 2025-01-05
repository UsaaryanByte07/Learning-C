#include <stdio.h>

int main(){
    FILE *ptr ;
    ptr = fopen("aryan61.txt","r");

    if(ptr == NULL){ //if the file does not exist the pointer returns NULL
        printf("The File does not exist\n");
    }else{

    int num;
    fscanf(ptr,"%d",&num);
    printf("%d\n",num);

    fscanf(ptr,"%d",&num); //The File pointer keeps on moving
    printf("%d\n",num);

    char name[80];
    fscanf(ptr,"%c",name); //to get a character we use fgetc and to write a character in file we use fputc
    printf("%c\n",name);

    }

    fclose(ptr);
    return 0;
}