#include <stdio.h>

int main(){
    int i = 4;
    printf("The Value of i is %d\n",i++);  //Pehle print hoga baad mai increment
    printf("The Value of i is %d\n",++i);  //Pehle Increment hoga Baad mai print
    printf("The Value of i is %d\n",i--);  //Pehle print hoga baad mai decrement
    printf("The Value of i is %d\n",--i);  //Pehle decrement hoga baad mai print
    return 0;
}