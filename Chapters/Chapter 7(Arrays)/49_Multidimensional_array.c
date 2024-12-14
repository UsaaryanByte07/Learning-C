#include <stdio.h>

void print2darray(int array[4][3]){
    for(int i = 0;i<4;i++){
        for(int j =0;j<3;j++){
            printf("The Value of arr[%d][%d] is %d\n",i,j,array[i][j]);
        }
    }
}
int main(){
    int arr[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    print2darray(arr);
    return 0;
}