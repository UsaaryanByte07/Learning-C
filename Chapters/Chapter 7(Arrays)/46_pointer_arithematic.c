#include <stdio.h>

int main(){
    int a = 88;
    int* b = &a;
    printf("The Value of ptr is %d\n",b);
    b++; //The value of b will increment by the space taken by datatype //like here int takes 4 Bytesk
    printf("The Value of ptr is %d\n",b);
    b += 2; //will add 2*(Space taken by the datatype(here it is int takes 4 bytes))
    printf("The Value of ptr is %d\n",b);
    b -= 3; //will subtract 3*(Space taken by the datatype(here it is int takes 4 bytes))
    printf("The Value of ptr is %d\n",b);
    return 0;
}