#include <stdio.h>

int main(){
    /* 2. Write a program to print multiplication table of 10 in reversed order. */
    int n=10;
    for(int i = 10;i>0;i--){
        int r = i*n;
        printf("%d x %d = %d\n",n,i,r);
    }
    return 0;
}