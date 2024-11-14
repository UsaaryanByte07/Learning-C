#include <stdio.h>

int main(){
    /* 9. Repeat 8 using while loop. */
    int num,factorial = 1,i= 1;
    printf("Enter the Number : ");
    scanf("%d",&num);
    while(i<=num){
        factorial *= i;
        i++;
    }
    printf("The Factorial of %d is %d\n",num,factorial);
    return 0;
}