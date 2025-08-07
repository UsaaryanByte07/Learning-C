#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int n;
    
    srand(time(0));  //Sets seed using current time, to get new results every time 

    n = rand();

    printf("%d\n",n); 
    return 0;
    return 0;
}