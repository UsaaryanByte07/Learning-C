#include <stdio.h>

int sum(int* a,int* b);

int sum(int* a,int* b){
    *a = 6; //Here sum function can change the value of x as in this case address of x is passed to function 
    return *a+*b;
}
int main(){

    int x =1,y=6;
    printf("The Sum of 1 and 6 is %d\n",sum(&x,&y));
    printf("The Value of x is %d\n",x);

    return 0;
}