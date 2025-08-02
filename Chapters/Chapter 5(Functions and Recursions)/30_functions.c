#include <stdio.h>

//Function Prototype
int sum(int,int);

int sum(int x,int y){ //here x and y are Parameters
    //Function Definetion
    printf("The Sum is %d\n",x+y);
    return x+y;
}

//A void function does not Returns anything
void display();

int main(){
    sum(10,20);
    sum(30,40); //Function call
    int b = sum(30,88); //30 and 88 are Arguments 
    printf("The value of b is %d\n",b);
    return 0;
}