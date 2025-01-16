#include <stdio.h>

int main(){
    /* 1. Write a program to print the address of a variable. Use this address to get the 
    value of the variable. */
    int a = 90;
    int *ptr = &a;
    printf("Address of a is %p\n",ptr);
    printf("value of a is %d\n",*(&a));
    return 0;
}