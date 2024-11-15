#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    printf("%lf\n",pow(4,3)); //return type is double
    printf("%lf\n",sqrt(24)); //return type is double
    printf("%d\n",abs(-40)); //return type is int
    printf("%d\n",fabs(-23.3)); //return type is int
    printf("%lf\n",ceil(3.3)); //return type is double //The result is the smallest integer greater than or equal to x.
    printf("%lf\n",floor(3.3)); //return type is double //The result is the Largest integer smaller than or equal to x.
    printf("%lf\n",round(3.3)); //return type is double //Rounds off normally as in normal math if round(2.5)=3
    printf("%lf\n",log(2.71828)); //return type is double
    printf("%lf\n",log10(100)); //return type is double
    printf("%lf\n",sin(3.14159)); //return type is double //Angle in radians
    printf("%lf\n",cos(3.14159)); //return type is double //Angles in radian
    printf("%lf\n",tan(0)); //return type is double //Angles in radian
    printf("%lf\n",exp(2)); //return type is double
    return 0;
}