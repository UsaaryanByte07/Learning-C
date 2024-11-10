#include <stdio.h>

int main(){
    int a = 10;
    int b = 11;
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d / %d = %.2f\n",b,a,(float)b/a); //Cast to float is used becoz in c a int divided by int is always a int 
    printf("%d * %d = %d\n",a,b,a*b);
    printf("The Remainder of %d divided by %d is %d",b,a,b%a); //Doesn't Operates on Float and the sign of result is same as the Numerator
    return 0;
}