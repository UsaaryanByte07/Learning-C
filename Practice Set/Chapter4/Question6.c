#include <stdio.h>

int main(){
    /* 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. */
    int i =1;
    int sum1=0,sum2=0;
    do{
        sum1 += i;
        i++;
    }while(i<=10);

    for(int p = 1;p<=10;p++){
        sum2 += p;
    }
    printf("Sum is %d\n",sum1);
    printf("Sum is %d\n",sum2);
    return 0;
}