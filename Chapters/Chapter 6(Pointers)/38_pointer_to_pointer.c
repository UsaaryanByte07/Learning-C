#include <stdio.h>

int main(){
    int i = 9;
    int* j = &i;
    int** k = &j;
    printf("%p\n",k);
    printf("The Value of i is %d\n",i);
    printf("The Value of i is %d\n",*j);
    printf("The Value of i is %d\n",*(&i));
    printf("The Value of i is %d\n",**(&j)); // **(&j) = **(&(&i)) = i  //cancel *  by &
    return 0;
}