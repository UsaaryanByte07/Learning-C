#include <stdio.h>
void C_to_F(float c){
    printf("%.4f degree Celsuis is Equivalent to %.4f Fahrenheit",c,(9*c)/5+32);
}
void main(){
    /* 2. Write a function to convert Celsius temperature into Fahrenheit */
    C_to_F(35.6);
}