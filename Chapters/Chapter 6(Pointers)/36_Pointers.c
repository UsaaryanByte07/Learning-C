#include <stdio.h>

int main(){
    //Pointers are variable which stores Address of Other Variables
    int i = 77;
    int* j = &i;//j is a pointer pointing to i(Means Storing address of i) //j is a integer pointer
    printf("The Address of i is %p\n",&i);
    printf("The Address of i is %p\n",j);
    printf("The Value at Address i is %d\n",*j);//*j=*(&i)
    printf("The value at Address of j is %p\n",*(&j));

    //The value at address or * operator is used to obtain the value present at a given memory address.

    return 0;
}