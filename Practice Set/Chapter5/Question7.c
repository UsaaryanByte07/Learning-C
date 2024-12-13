#include <stdio.h>
void pattern(int n){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    /* 7. Write a program using function to print the following pattern (first n lines) 
     * 
     * * 
     * * *  
     * * * * 
     */
    pattern(9);
    return 0;
}