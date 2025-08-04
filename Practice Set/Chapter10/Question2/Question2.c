#include <stdio.h>

int main(){
    /* 2. Write a program to generate multiplication table of a given number in text format.
       Make sure that the file is readable and well formatted. */

    FILE *ptr;
    ptr = fopen("Question2.txt","w+");
    if(ptr == NULL){
        printf("Error Occured!!!");
    }else{
        int n,m;
        printf("Enter the Number whose Table you want and also Enter the till what multiples you want table: ");
        scanf("%d %d",&n,&m);
        for(int i = 1;i<=m;i++){
            fprintf(ptr,"%d x %d = %d\n",n,i,n*i);
        }
    }
    fclose(ptr);
    return 0;
}