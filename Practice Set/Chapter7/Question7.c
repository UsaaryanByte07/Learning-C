#include <stdio.h>

int main(){
    /* Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 
    and 9 respectively. */

    int n1,n2,n3;
    int arr[3][10];
    printf("Enter the Three Numbers whose MUltiplication Table you want: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    for(int i=0;i<10;i++){
        arr[0][i] = (i+1)*n1;
        arr[1][i] = (i+1)*n2;
        arr[2][i] = (i+1)*n3;
    }
    printf("Multiplication Table of %d: \n",n1);
    for(int i = 0;i<10;i++){
        printf("%d x %d = %d",n1,i+1,arr[0][i]);
        printf("\n");
    }
    printf("\n");
    printf("Multiplication Table of %d: \n",n2);
    for(int i = 0;i<10;i++){
        printf("%d x %d = %d",n1,i+1,arr[0][i]);
        printf("\n");
    }
    printf("\n");
    printf("Multiplication Table of %d: \n",n3);
    for(int i = 0;i<10;i++){
        printf("%d x %d = %d",n1,i+1,arr[0][i]);
        printf("\n");
    }
    return 0;
}