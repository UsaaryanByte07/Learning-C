#include <stdio.h>
void changearray(int* arr){
    arr[2] = 67; 
}
int main(){
    int marks[] = {3,4,5,76,3};
    printf("The marks[2] is %d\n",marks[2]);
    changearray(marks); 
    printf("The marks[2] is %d\n",marks[2]);
    return 0;
}