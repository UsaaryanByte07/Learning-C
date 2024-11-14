#include <stdio.h>

int main(){
    /* 7. Write a program to calculate the sum of the numbers occurring in the 
    multiplication table of 8. (consider 8 x 1 to 8 x 10). */
    int i=1,sum;
    while(i<=10){
        int m = 8*i;
        sum += m;
        i++;
    }
    printf("The Result is %d\n",sum);
    return 0;
}