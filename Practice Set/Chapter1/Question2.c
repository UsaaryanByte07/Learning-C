#include <stdio.h>

int main(){
    /* 2. Calculate the area of a circle and modify the same program to calculate the 
    volume of a cylinder given its radius and height. */
    
    //For area of Circle
    int r1;
    printf("Enter the Raduis of Circle : ");
    scanf("%d",&r1);
    int area = 3.14*(r1*r1);
    printf("The Area of Circle is %d\n",area);

    //For Volume of Cylinder
    int r2;
    printf("Enter the Raduis of Cylinder : ");
    scanf("%d",&r2);
    int h;
    printf("Enter the Height of Cylinder : ");
    scanf("%d",&h);
    int volume = 3.14*(r2*r2)*h;
    printf("The Volume of Cylinder is %d",volume);
    return 0;
}