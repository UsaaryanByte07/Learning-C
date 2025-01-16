#include <stdio.h>

int main(){
    /* 1.Create a array and print the elements of array using pointers */
    int n;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Element No.%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("The Given Array is ");
    for(int i = 0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    return 0;
}