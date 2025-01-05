#include <stdio.h>

typedef struct Complex {
    float real;
    float img;
} complexNo; //We can later in the main function also do this "typedef struct Complex compleNo;"
int main(){
    typedef int aryan; //Create a new datatype named aryan with same properties as int 
    aryan a = 56;
    printf("%d",a);

    complexNo c1,c2,c3; 
    return 0;
}