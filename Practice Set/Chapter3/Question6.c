#include <stdio.h>

int main(){
    /* 6. Write a program to find greatest of four numbers entered by the user. */

    float n1,n2,n3,n4;
    printf("Enter the 1st Number : ");
    scanf("%f",&n1);
    printf("Enter the 2nd Number : ");
    scanf("%f",&n2);
    printf("Enter the 3rd Number : ");
    scanf("%f",&n3);
    printf("Enter the 4th Number : ");
    scanf("%f",&n4);
    if(n1>n2 && n1>n3 && n1>n4){
        printf("The 1st Number %f is the Greatest Number",n1);
    } else if(n2>n1 && n2>n3 && n2>n4){
        printf("The 2nd Number %f is the Greatest Number",n2);
    } else if(n3>n1 && n3>n4 && n3>n2){
        printf("The 3rd Number %f is the Greatest Number",n3);
    } else if(n4>n1 && n4>n2 && n4>n3){
        printf("The 4th Number %f is the Greatest Number",n4);
    } else{
        printf("All the Numbers are Equal");
    }
    return 0;
}