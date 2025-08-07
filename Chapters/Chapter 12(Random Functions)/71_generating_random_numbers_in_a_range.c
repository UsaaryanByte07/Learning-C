#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int n,upperLimit,lowerLimit;
    printf("Enter the Upper and Lower Limit to Generate Random Number: ");
    scanf("%d %d",&upperLimit,&lowerLimit);
    
    srand(time(0));  

    n = (rand()%(upperLimit -lowerLimit + 1)) + lowerLimit;

    printf("The Random Number is %d\n",n); 
    return 0;
}