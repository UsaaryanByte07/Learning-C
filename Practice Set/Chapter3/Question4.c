#include <stdio.h>

int main(){
    /* 4. Write a program to find whether a year entered by the user is a leap year or not. 
    Take year as an input from the user. */
    int y;
    printf("Enter the Year : ");
    scanf("%d",&y);
    if(y%4==0 && (y%100!=0 || y%400==0)){
        printf("The Year is a Leap year");
    } else{
        printf("The Year is not a Leap year");
    }
    return 0;
}