#include <stdio.h>

int main(){
    /* 3. Write a program to check whether a number is divisible by 97 or not. */

    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    printf("%s\n",num%97==0? "The Number is Divisible by 97":"The Number is Not Divisible by 97");

    return 0;
}