#include <stdio.h>

int main(){
    /* 1. Write a C program to calculate area of a rectangle: 
    a. Using hard coded inputs.  
    b. Using inputs supplied by the user. */
    
    //Sub-Question a
    int a = 23;
    int d = 20;
    int area = a*d;
    printf("The area of Rectangle is %d\n",area);

    //Sub-Question b
    int l;
    int b;
    printf("Enter the Length of Rectangle ");
    scanf("%d",&l);
    printf("Enter the breadth of Rectangle ");
    scanf("%d",&b);
    area = l*b;
    printf("The Area of Rectangle is %d ",area);
    return 0;
}