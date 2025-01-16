#include <stdio.h>
void change(int *i){
    *i *= 10;
}
int main(){
    /* 4. Write a function and pass the value by reference. */ 
    int i;
    printf("Enter the value of i: ");
    scanf("%d",&i);
    printf("Value of i before %d\n",i);
    change(&i);
    printf("Value of i After %d\n",i);
    return 0;
}