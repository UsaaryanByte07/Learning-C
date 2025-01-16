#include <stdio.h>

int main(){
    /* 3. Write a program to create an array of 10 integers and store multiplication table of 
    5 in it. */
    int n;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        int j = 5*(i+1);
        arr[i] = j;
    }
    
    printf("The Array is ");
    for(int i = 0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    return 0;
}