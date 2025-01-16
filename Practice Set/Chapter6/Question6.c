#include <stdio.h>

int main(){
    /* 6. Write a program to print the value of a variable i by using “pointer to pointer” type 
    of variable. */
    
    int i = 12;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    printf("The value of i is %d\n",**ptr2);
    return 0;
}