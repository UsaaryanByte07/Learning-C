#include <stdio.h>

int main(){
    int marks[] = {4,56,6,67};

    int* ptr = marks; //same as int* ptr  &marks[0];

    for(int i =0;i<4;i++){
        printf("The Value of Marks[%d] is %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}