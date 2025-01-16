#include <stdio.h>

void change(int *i){
    *i *= 10;
}
int main(){
    /* 3. Write a program to change the value of a variable to ten times of its current 
    value by using call by reference.  */ 
    int i;
    printf("Enter the value of i: ");
    scanf("%d",&i);
    printf("Value of i before %d\n",i);
    change(&i);
    printf("Value of i After %d\n",i);
    return 0;
}