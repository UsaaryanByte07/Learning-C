#include <stdio.h>

int main(){
    /* Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop */
    int n;
    printf("Enter the Value of n : ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}