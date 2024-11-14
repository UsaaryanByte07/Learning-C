#include <stdio.h>

int main(){
    /* 10. Write a program to check whether a given number is prime or not using loops.  */
    int num,isPrime = 1;
    printf("Enter a Positive Integer : ");
    scanf("%d",&num);

    if(num<=1){
        isPrime = 0;
    } else{
        for(int i = 2;i<num;i++){
            if(num%i==0){
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime){
        printf("The Number %d is a Prime Number\n",num);
    } else{
        printf("The Number %d is not a Prime Number\n",num);
    }
    return 0;
}