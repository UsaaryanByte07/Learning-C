#include <stdio.h>

int main(){
    char i = 'A';
    char* j = &i;
    printf("The Address of i is %p\n",&i);
    printf("The Address of i is %p\n",j);
    printf("The Value at Address i is %c\n",*j);//*j=*(&i)
    printf("The value at Address of j is %p\n",*(&j));

    return 0;
}