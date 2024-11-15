#include <stdio.h>
int change(int a){
    a = 10;
    return 0;
}
int main(){
    int b = 33;
    change(b); //The Value of b will still remain 33 as change function will get a copy of b as a argument not variable b 
    printf("The Value of b is %d",b);
    return 0;
}