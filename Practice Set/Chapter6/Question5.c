#include <stdio.h>
int* sum(int a,int b){
    static int sum; // Static variable persists beyond the function's scope
    sum = a + b;
    return &sum;
}
float* avg(int a,int b){
    static float avg;
    avg = ((float)a+(float)b)/2;
    return &avg;
}
int main(){
    /* 5. Write a program using a function which calculates the sum and average of two 
    numbers. Use pointers and print the values of sum and average in main(). */
    int a,b;
    printf("Enter the Two Numbers: ");
    scanf("%d %d",&a,&b);
    int *ptr1=sum(a,b);
    float *ptr2=avg(a,b);

    printf("The Sum and Average of %d and %d are %d and %.4f respectively\n",a,b,*ptr1,*ptr2);
    return 0;
}