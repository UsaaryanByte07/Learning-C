#include <stdio.h>

int main(){
    /* 8. Write a program to calculate the factorial of a given number using a for loop. */
    int num,factorial = 1;
    printf("Enter the Number : ");
    scanf("%d",&num);
    for(int i =1;i<=num;i++){
        factorial *= i;
    }
    printf("The Factorial of %d is %d\n",num,factorial);
    return 0;
}