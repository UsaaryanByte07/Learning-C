#include <stdio.h>

int main(){
    int a = 7;

    float b = 1.8;

    char c = 'A'; //Char should be in single Quotes //stores only 1 Chararcter

    //1 Byte = 8 Bits
    //int = 4 Bytes
    //char = 1 Bytes
    //float = 4 Bytes

    printf("The size of int %d is : %d\n",a,sizeof(a));
    printf("The size of float %f is : %d\n",b,sizeof(b));
    printf("The size of char %c is : %d",c,sizeof(c));
    return 0;
}