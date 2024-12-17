#include <stdio.h>

int main(){
    /*A string is a 1-D character array terminated by a null character (‘\0’)*/
    /*Characters are stored in contiguous memory locations. like normal array elements are stored in contiguous memory location*/
    char st[] = {'a','b','c','\0'};
    char st1[] = "abc"; //same as above the null charcater is automaticaly put at last when we write in this format
    printf("%s\n",st);
    printf("%s\n",st1);
    return 0;
}