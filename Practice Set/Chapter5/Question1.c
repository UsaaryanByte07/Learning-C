#include <stdio.h>
void avg(int a,int b,int c){
    printf("The Average of the numbers %d, %d and %d is %.4f",a,b,c,(float)(a+b+c)/3);
}
void main(){
    /* 1. Write a program using function to find average of three numbers.  */
    avg(2,8,7);
}