#include <stdio.h>
#include <string.h>

typedef struct Vector {
    float x;
    float y;
} vec ;

int main(){

    /* 1. Create a two-dimensional vector using structures in C. */
    
    int n;
    printf("Enter the Number of 2D vectors You want to input: ");
    scanf("%d",&n);
    vec vec_arr[n];
    for(int i =0;i<n;i++){
        printf("Enter the x and y Dimensions of vector No.%d: ",i+1);
        scanf("%f %f",&vec_arr[i].x,&vec_arr[i].y);
        while(getchar() != '\n');
    }

    for(int i =0;i<n;i++){
        printf("The Vector No.%d is %.2fi + %.2fj\n",i+1,vec_arr[i].x,vec_arr[i].y);
    }

    return 0;
}