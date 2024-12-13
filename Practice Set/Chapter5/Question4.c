#include <stdio.h>
int fibonacci(int n){
    if(n<=0){
        return 0;
    }else if(n==1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
void main(){
    /* 4. Write a program using recursion to calculate nth element of Fibonacci series. */
    int n;
    printf("Enter the position (n) to find the nth Fibonacci number: ");
    scanf("%d",&n);

    int result = fibonacci(n);

    printf("The Value of %dth fibonacci Number is %d\n",n,result);
}