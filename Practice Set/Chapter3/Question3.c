#include <stdio.h>

int main(){
    /* 3. Calculate income tax paid by an employee to the government as per the slabs 
    mentioned below: 
                    Income Slab                       Tax  
                    2.5 – 5.0L                       5% 
                    5.0L - 10.0L                      20% 
                    Above 10.0L                       30% 
    Note that there is no tax below 2.5L. Take income amount as an input from the user. */
    float i;
    float t;
    printf("Enter Your Income in LPA : ");
    scanf("%f",&i);
    if(i<=2.5){
        printf("You Have to pay 0 Tax");
    } else if(i<=5){
        t = (i-2.5)*0.05;
        printf("You Have to pay %.3f LPA Tax",t);
    } else if(i<=10){
        t = (i-5)*0.2 + 2.5*0.05;
        printf("You Have to pay %.3f LPA Tax",t);
    } else if(i>10){
        t= (i-10)*0.3 + 5*0.2 + 2.5*0.05;
        printf("You Have to pay %.3f LPA Tax",t);
    }
    return 0;
}