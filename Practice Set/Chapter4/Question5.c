#include <stdio.h>

int main(){
    /* 5. Write a program to sum first ten natural numbers using while loop. */
    int i = 1;
    int sum;
    while(i<=10){
        sum += i;
        i++;
    }
    printf("Sum of 1st Ten Natural Numbers is %d",sum);
    return 0;
}