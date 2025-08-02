#include <stdio.h>

//Recursion is suitable for Functions that are recursive in nature
int factorial(int n){
    //Base Condition(ensures that the Function ends at some point)
    if(n==1 || n==0){
        return 1;
    }
    return factorial(n-1)*n;
}
int main(){
    printf("%d",factorial(3));
    return 0;
}