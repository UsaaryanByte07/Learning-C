#include <stdio.h>

int main(){
    /* 4. Write a program containing a function which reverses the array passed to it. */
    int n;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter the Element No.%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("The Array Before Reversing is ");
    for(int i = 0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");

    for(int i =0;i<(n/2);i++){
        arr[i]=arr[i]^arr[n-i-1];
        arr[n-i-1]=arr[i]^arr[n-i-1];
        arr[i]=arr[i]^arr[n-i-1];
    }

    printf("The Array After Reversing is ");
    for(int i = 0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;
}