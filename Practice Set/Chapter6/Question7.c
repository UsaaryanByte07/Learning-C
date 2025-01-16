#include <stdio.h>

void change(int i){
    i *= 10;
}
int main(){
    /* 7. Try problem 3 using call by value and verify that it does not change the value of 
    the said variable.  */ 
    int i;
    printf("Enter the value of i: ");
    scanf("%d",&i);
    printf("Value of i before %d\n",i);
    change(i);
    printf("Value of i After %d\n",i);
    return 0;
}