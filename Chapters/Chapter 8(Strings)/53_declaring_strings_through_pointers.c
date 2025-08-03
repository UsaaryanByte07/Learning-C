#include <stdio.h>

int main(){
    char *ptr = "harry"; /* This tells the compiler to store the string in memory and assigned address is stored in a char pointer.*/
    ptr = "Aryan"; /* 1. Once a string is defined using char st [] = “harry”, it cannot be reinitialized to 
                       something else. 
                       2. A string defined using pointers can be reinitialized*/
    printf("%s\n", ptr); // prints: Aryan
    printf("%p\n", ptr); // prints: (address of "Aryan" in memory)

    // ptr only stores the address of the string, not the string itself.
    // When you use printf("%s", ptr);, it tells C to go to the address stored in ptr and print the characters found there as a string.
    // When you use printf("%p", ptr);, it prints the address stored in ptr.
    return 0;
}