#include <stdio.h>
void printAddress(int i){
    printf("The Address of i is %p\n",&i);
}
int main(){
    /* 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
    a function and print its address. Are these addresses same? Why? */
    int i = 10;
    printf("The Address of i is %p\n",&i);
    printAddress(i);

    //This is due to call by value.. as a copy of variable i is passed not the orignal variable.. and both copy of i and original i have different memory locations..
    return 0;
}