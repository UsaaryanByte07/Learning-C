#include <stdio.h>

struct number{
    int num;
};

void change(struct number *num){
    num->num += 5;
};

int main(){
    /* 4. Write a program to illustrate the use of arrow operator → in C. */
    
    struct number num1;
    struct number *ptr = &num1;
    ptr->num = 10;
    printf("The Value of num in structure num1 before change is %d\n",ptr->num);
    change(ptr);
    printf("The Value of num in structure num1 after change is %d\n",ptr->num);
    return 0;
}