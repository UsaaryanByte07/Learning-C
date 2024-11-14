#include <stdio.h>

int main(){
    /* Quick Quiz: Write a program to print ‘n’ natural numbers in reverse order. */
    int n;
    printf("Enter the Value for n : ");
    scanf("%d",&n);
    int i = 1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    return 0;
}