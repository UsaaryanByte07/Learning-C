#include <stdio.h>

int main(){
    float c = 9/2; //It will give 4 becoz int divided by int is always a int 
    //int and int give a int 
    //int and float give a float
    //float and float give a float
    int d = 4.8;
    printf("The Value of 9/2 is %.2f\n",c);
    printf("The Value of  d is %.2f",d); //The value of float 4.8 is demoted to 4 Becoz it is stored in int

    return 0;
}