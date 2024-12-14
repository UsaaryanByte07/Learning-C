#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter Marks 0,1,2,3, and 4: ");
    scanf("%d %d %d %d %d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);
    printf("Marks 0,1,2,3, and 4 are %d,%d,%d,%d and % d respectively\n",marks[0],marks[1],marks[2],marks[3],marks[4]);
    return 0;
}