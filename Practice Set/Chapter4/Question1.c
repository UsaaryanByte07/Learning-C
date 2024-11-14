#include <stdio.h>

int main(){
    /* 1. Write a program to print multiplication table of a given number n. */
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i = 1;i<=10;i++){
        int r = i*n;
        printf("%d x %d = %d\n",n,i,r);
    }
    return 0;
}