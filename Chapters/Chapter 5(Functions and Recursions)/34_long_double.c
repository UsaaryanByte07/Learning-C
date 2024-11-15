#include <stdio.h>

int main(){
    long a = 100000; //Stores integer values same as int but can store longer integers
    double b = 3.14758783; //Stores float values same as float but can store upto more decimal places
    long double c = 39.88; //Stores float values same as double but can store upto more decimal places
    printf("%ld\n",a);
    printf("%lf\n",b);
    printf("%Lf\n",c);
    return 0;
}