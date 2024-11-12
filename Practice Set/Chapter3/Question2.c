#include <stdio.h>

int main(){
    /* 2. Write a program to determine whether a student has passed or failed. To pass, a 
    student requires a total of 40% and at least 33% in each subject. Assume there 
    are three subjects and take the marks as input from the user. */
    int p1,p2,p3;
    printf("Enter the percentage of 1st Subject : ");
    scanf("%d",&p1);
    printf("Enter the percentage of 2st Subject : ");
    scanf("%d",&p2);
    printf("Enter the percentage of 3st Subject : ");
    scanf("%d",&p3);
    int t = (p1+p2+p3)/3;
    if(t>=40 && p1>=33 && p2>=33 && p3>=33){
        printf("You Have Passed");
    } else{
        printf("You Have Failed");
    }
    return 0;
}