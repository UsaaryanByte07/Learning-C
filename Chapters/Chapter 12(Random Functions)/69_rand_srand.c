#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    
    /* rand() doesn’t produce truly random numbers.
       It uses a mathematical formula to calculate the next number.
       So if you run the same program again, you'll get the same numbers every time.
       Hence, is called a pseudo-random function.
       Imagine a machine that creates random numbers based on a number you give it (the seed). */
    
    srand(5); // Set starting seed

    n = rand();

    printf("%d\n",n); //will give the same number each time you run the program because seed value is same.
    return 0;
}