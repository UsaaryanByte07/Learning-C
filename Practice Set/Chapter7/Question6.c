#include <stdio.h>

int main(){
    /* 9. Create a three–dimensional array and print the address of its elements in 
    increasing order. */
    int arr[3][3][2];
    int *ptr = &arr[0][0][0];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            for(int k =0;k<2;k++){
                printf("The Address of arr[%d][%d][%d] is %p\n",i,j,k,ptr);
                ptr++;
            }
        }
    }
    return 0;
}