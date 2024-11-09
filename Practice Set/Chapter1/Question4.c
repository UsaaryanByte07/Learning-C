#include <stdio.h>

int main(){
    /* 4. Write a program to calculate simple interest for a set of values representing      
    principal, number of years and rate of interest.  */
    
    int p;
    float r;
    int t;
    printf("Enter the Principal Amount : ");
    scanf("%d",&p);
    printf("Enter the Rate of Interest : ");
    scanf("%f",&r);
    printf("Enter the Time Period(in years) : ");
    scanf("%d",&t);
    float SI = (p*r*t)/100;
    printf("The Simple Interest is %.4f",SI);
    return 0;
}