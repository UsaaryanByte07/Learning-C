#include <stdio.h>
void swap(int* a,int* b){
    *a=(*a)^(*b);
    *b=(*a)^(*b);
    *a=(*a)^(*b);
}
int main(){
    int x,y;
    printf("Enter the Values of x and y: ");
    scanf("%d %d",&x,&y);
    printf("The Value of x and y before swaping are %d and %d respectively\n",x,y);
    swap(&x,&y);
    printf("The Value of x and y after swaping are %d and %d respectively\n",x,y);
    return 0;
}