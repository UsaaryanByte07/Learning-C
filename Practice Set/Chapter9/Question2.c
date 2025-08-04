#include <stdio.h>
#include <string.h>


typedef struct Vector {
    float x;
    float y;
    float z;
} vec ;

void sumVector(vec* arr,int n){
    vec resultantVector;
    resultantVector.x = 0;    
    resultantVector.y = 0;    
    resultantVector.z = 0;    
    for(int i = 0;i<n;i++){
        resultantVector.x += arr[i].x;
        resultantVector.y += arr[i].y;
        resultantVector.z += arr[i].z;
    }
    printf("The Resultant Vector is %.2fi + %.2fj + %.2fk\n",resultantVector.x,resultantVector.y,resultantVector.z);
}

int main(){

    /* 2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it. 
        The vectors must be three–dimensional */
    
    int n;
    printf("Enter the Number of 3D vectors You want to input: ");
    scanf("%d",&n);
    vec vec_arr[n];
    for(int i =0;i<n;i++){
        printf("Enter the x,y and z Dimensions of vector No.%d: ",i+1);
        scanf("%f %f %f",&vec_arr[i].x,&vec_arr[i].y,&vec_arr[i].z);
        while(getchar() != '\n');
    }

    for(int i =0;i<n;i++){
        printf("The Vector No.%d is %.2fi + %.2fj + %0.2fj\n",i+1,vec_arr[i].x,vec_arr[i].y,vec_arr[i].z);
    }
    
    sumVector(vec_arr,n);
    return 0;
}