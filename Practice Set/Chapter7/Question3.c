#include <stdio.h>

int main(){
    /* 3. Write a program to create an array of n integers and store and print multiplication table of 
    the number m in it. m and n are inputs from user.*/

    int n,m;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Number whose Multiplication Table is to be Stored: ");
    scanf("%d",&m);
    for(int i = 0;i<n;i++){
        arr[i] = (i+1)*m;
    }

    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}