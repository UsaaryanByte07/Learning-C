#include <stdio.h>

int main(){
    int marks;
    printf("Enter the Number : ");
    scanf("%d",&marks);
    switch(marks){
        case 45:
           printf("Grade D");
           break;
        case 67:
           printf("Grade C");
           break;
        case 80:
        case 87:
           printf("Grade B");
           break;
        case 96:
           printf("Grade A");
           break;
        default:
          printf("No Data is Available");
    }
    return 0;
}