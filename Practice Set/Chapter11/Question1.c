#include <stdio.h>
#include <stdlib.h>

int main(){
    /* 1. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70).
        Use realloc to make it store 15 number (from 7 x 1 to 7 x 15). */
    int *ptr,num;
    printf("Enter the Number whose table you want: ");
    scanf("%d",&num);
    ptr = (int*)calloc(10,sizeof(int));
    for(int i = 0;i<10;i++){
        ptr[i] = num*(i+1);
        printf("%d x %d = %d\n",num,i+1,ptr[i]);
    }
    ptr = (int*)realloc(ptr,15*sizeof(int));
    for(int i = 0;i<15;i++){
        ptr[i] = num*(i+1);
        printf("%d x %d = %d\n",num,i+1,ptr[i]);
    }
    return 0;
}