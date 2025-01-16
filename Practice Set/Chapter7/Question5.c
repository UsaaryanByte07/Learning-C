#include <stdio.h>
void countPositive(int arr[],int n){
     int count = 0;
     for(int i =0;i<n;i++){
         if(arr[i]>0){
            count++;
         }
     }
     printf("The Number of Positive integers in Given array are %d\n",count);
}
int main(){
    /* 6. Write a program containing functions which counts the number of positive 
    integers in an array. */
    
    int n;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter the Element No.%d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The Array is ");
    for(int i = 0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
    countPositive(arr,n);
    return 0;
}