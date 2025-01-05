#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("aryan62.txt","w");
    fprintf(ptr,"%f\n",78.88);
    fprintf(ptr,"%s\n","Aryan Upadhyay");
    fprintf(ptr,"%c\n",'A');
    fclose(ptr);
    return 0;
}