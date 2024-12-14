#include <stdio.h>

int main(){
    int cgpa[3] = {9,8,7};

    printf("The Address of cgpa[0] is %u\nThe Address of cgpa[1] is %u\nThe Address of cgpa[2] is %u\n",&cgpa[0],&cgpa[1],&cgpa[2]); //Addresses are continues and at a difference of 4 //becoz int takes 4 bytes of memory
    return 0;
}