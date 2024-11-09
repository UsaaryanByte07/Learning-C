#include <stdio.h>

int main(){
    /* 3. Write a program to convert Celsius (Centigrade degrees temperature to 
    Fahrenheit). */
    
    float c;
    printf("Enter the Temperature in Celsuis : ");
    scanf("%f",&c);
    float f = 1.8*c + 32;
    printf("The Temperature in Fehranheit is %.2f",f); //Displays upto 2 decimal places
    return 0;
}