#include <stdio.h>

int main(){
    int marks[90]; //creates a array named marks that can store 90 integer values

    marks[0] = 86;
    marks[1] = 56;
    //we can go all upto marks[89]
    printf("Marks 0 and Marks 1 are %d and %d respectively\n",marks[0],marks[1]);
    return 0;
}