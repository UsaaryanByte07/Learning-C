#include <stdio.h>

int main(){
    //A non-zero value in C is considered as true and a zero value is considered as false
    if(12){
        printf("This if is Executed\n");
    }
    if(1.23){
        printf("This if is Executed\n");
    }
    if('s'){
        printf("This if is Executed\n");
    }
    if(0){
        printf("This if is not Executed");
    }
    if(0.0){
        printf("This if is not Executed");
    }
    return 0;
}