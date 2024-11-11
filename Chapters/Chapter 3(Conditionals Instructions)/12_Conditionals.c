#include <stdio.h>

int main(){
    int age = 5;

    if(age>10){
        printf("Your age is greater then 10\n");
    } else if(age == 10){
        printf("Your Age is Equal to 10\n");
    } else{
        printf("Your Age is less then 10\n");
    }

    if(age%5==0){
        printf("Your Age is Divisible by 5\n");
    }
    return 0;
}